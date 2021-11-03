class StaticBlock
{
	static 
	{
		System.out.println("Static block of main");
	}
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		//Demo obj;
	    System.out.println(Demo.x);
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
	}
	
}

class Demo
{
	public int i,j;
	public static int x,y;
	static
	{
		System.out.println("Inside static block");
		x = 10;
		y = 20;
		
	}
	public Demo()
	{
		System.out.println("Inside Constructor");
		i = 10;
		j = 20;
	}
}