
#include "stdafx.h"

#using <mscorlib.dll>
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

#include <tchar.h>
#include <windows.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Drawing;
using namespace System::Windows::Forms;

public __gc class NForm : public Form
{
public:
	Button *btn;
	Button *btn2;
	Button *btn3;
	PictureBox *pbox;
	void btn_Click(Object *sender, System::EventArgs* e); 
	void CaptureScreen(bool FullScreen);

NForm()
{
	this->StartPosition = FormStartPosition::CenterScreen;
	this->Text = "Capture screen - Nish for CodeProject -IJW";
	this->Size = Drawing::Size(750,550);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog; 

	btn=new Button();
	btn->Text="Capture Screen";
	btn->Location=Point(5,5);
	btn->Size=Drawing::Size(100,30);
	btn->add_Click(new EventHandler(this,&NForm::btn_Click)); 
	this->Controls->Add(btn);

	btn2=new Button();
	btn2->Text="Capture Form";
	btn2->Location=Point(125,5);
	btn2->Size=Drawing::Size(100,30);
	btn2->add_Click(new EventHandler(this,&NForm::btn_Click)); 
	this->Controls->Add(btn2);

	btn3=new Button();
	btn3->Text="Save C:\\Z.Jpg";
	btn3->Location=Point(250,5);
	btn3->Size=Drawing::Size(100,30);
	btn3->add_Click(new EventHandler(this,&NForm::btn_Click)); 
	this->Controls->Add(btn3);

	pbox = new PictureBox();
	pbox->Location=Point(5,45);
	pbox->Size=Drawing::Size(730,470);
	pbox->BorderStyle = BorderStyle::Fixed3D;
	pbox->SizeMode = PictureBoxSizeMode::StretchImage;


	this->Controls->Add(pbox);
}
};

int __stdcall WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	Application::Run(new NForm());
	return 0;
}

void NForm::btn_Click(Object *sender, System::EventArgs *e)
{
	if(sender->Equals(btn))
		CaptureScreen(true);
	else
	{
		if(sender->Equals(btn2))
			CaptureScreen(false);
		else
			pbox->Image->Save("C:\\Z.Jpg",
				Drawing::Imaging::ImageFormat::Jpeg);
	}

}

void NForm::CaptureScreen(bool FullScreen)
{
	HDC hDC;
	if(FullScreen)
		hDC = GetDC(NULL); //Get full screen
	else
	{
		HWND hWnd=(HWND)this->Handle.ToInt32(); //Get HWND of form
		hDC = GetWindowDC(hWnd); //Now get it's DC handle 
	}
	HDC hMemDC = CreateCompatibleDC(hDC);
	RECT r;
	GetWindowRect((HWND)this->Handle.ToInt32(),&r); //need this for Form
	SIZE size;
	if(FullScreen)
	{ 
		size.cx = GetSystemMetrics(SM_CXSCREEN);
		size.cy = GetSystemMetrics(SM_CYSCREEN);
	} 
	else
	{
		size.cx = r.right-r.left;
		size.cy = r.bottom-r.top;
	}

	//most of the remaining code is normal GDI stuff

	HBITMAP hBitmap = CreateCompatibleBitmap(hDC, size.cx, size.cy);
	if (hBitmap)
	{
		HBITMAP hOld = (HBITMAP) SelectObject(hMemDC, hBitmap);
		BitBlt(hMemDC, 0, 0, size.cx, size.cy, hDC, 0, 0, SRCCOPY);
		SelectObject(hMemDC, hOld);
		DeleteDC(hMemDC);
		ReleaseDC(NULL, hDC);
		pbox->Image = Image::FromHbitmap(hBitmap); 
		DeleteObject(hBitmap);
	}
}






