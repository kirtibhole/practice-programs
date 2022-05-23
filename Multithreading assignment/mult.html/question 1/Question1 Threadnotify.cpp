#include "stdafx.h"
#include "Thread.h"


#using <mscorlib.dll>
#using <System.dll>
//#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

#include <tchar.h>
#include <windows.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Drawing;
using namespace System::Windows::Forms;
Result *LRESult;
Notification *pNotifyStruct;

CYourThreadsOwner::CYourThreadsOwner()
{
  memset(m_byBuffer, 0, sizeof(m_byBuffer));
 
  m_bWorking = true;
 
  m_pcThreads[0] = AfxBeginThread(thread1, this);
  m_pcThreads[1] = AfxBeginThread(thread2, this);
  
}
afx_msg void memberFxn(NMHDR* pNotifyStruct, LRESULT* result);
CYourThreadsOwner::~CYourThreadsOwner()
{
  m_bWorking = false;
 
  HANDLE ahTherads[3];
  ahTherads[0] = m_pcThreads[0]->m_hThread;
  ahTherads[1] = m_pcThreads[1]->m_hThread;
  
 
  WaitForMultipleObjects(3, ahTherads, TRUE, INFINITE);
}
 
 DWORD WINAPI CYourThreadsOwner::thread1(CYourThreadsOwner* pcOwnner)
{
  while (pcOwnner && pcOwnner->m_bWorking) {
    CSingleLock cLock(pcOwnner->m_cCritSection);
    cLock.Lock();
   
    cLock.Unlock();
    Sleep(10);
  }
  return 0;
}
 
 DWORD WINAPI CYourThreadsOwner::thread2(CYourThreadsOwner* pcOwnner)
{
  while (pcOwnner && pcOwnner->m_bWorking) {
    CSingleLock cLock(pcOwnner->m_cCritSection);
    cLock.Lock();
    
    cLock.Unlock();
    Sleep(10);
  }
  return 0;
}
 
 