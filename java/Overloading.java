//import java.lang.*;
class Demo
{
	// overloading by changing the data type
	public int Add(int iNo1,int iNo2)
	{
		System.out.println("inside first add");
		return iNo1 + iNo2;
	}
	
	public float Add(float No1,float No2)
	{
		System.out.println("inside first add");
		return No1 + No2;
	}
    // overloading by changing the number of arguments
	public int Add(int iNo1,int iNo2,int iNo3)
	{
		System.out.println("inside first add");
		return iNo1 + iNo2+iNo3;
	}
	// overloading by changing the sequence of arguments
	public void fun(int i,float f)
	{
		System.out.println("inside first fun");
		//return iNo1 + iNo2+iNo3;
	}
	public void fun(float f,int i)
	{
		System.out.println("inside second fun");
		//return iNo1 + iNo2+iNo3;
	}
	
}

class Overloading
{
	public static void main(String Arg[])
	{
		System.out.println("Inside main");
		Demo obj;// Reference
		obj = new Demo();
		int iRet = 0;
		float fRet = 0.0f;
		
		iRet = obj.Add(10,11);
		System.out.println("Addition of 2 integers:"+iRet);
		
		fRet = obj.Add(10.5f,11.3f);
		System.out.println("Addition of 2 float:"+fRet);
		
		iRet = obj.Add(10,11,10);
		System.out.println("Addition of 3 integers:"+iRet);
		
		obj.fun(10,11f);
		obj.fun(11.2f,10);
	}
}