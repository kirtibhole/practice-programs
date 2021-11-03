import java.util.*;
class InnterfaceDemo3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter radius");
		float value = sobj.nextFloat();
		Marvellous mobj = new Marvellous();
		float fRet = 0.0f;
		fRet = mobj.area(value);
		System.out.println("Area is : "+fRet);
		fRet = mobj.circumfarance(value);
		System.out.println("Area is : "+fRet);
		System.out.println("circumfarance is:"+fRet);
		System.out.println("circumfarance is:"+Circle.PI);
		//Circle.PI = 6.14f;//error
		
	}
}

interface Circle
{
	float PI = 3.14f;
	
	float area(float radius);
	float circumfarance(float radius);
	
}
class Marvellous implements Circle
{
	public float area(float radius)
	{
		float ret = 0.0f;
		ret = PI * radius * radius;
		return ret;
	}
	public float circumfarance(float radius)
	{
	     float ret = 0.0f;
         ret = 2*PI*radius;
         return ret;		 
	}
}

