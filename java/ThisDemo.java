class Demo
{
	public int x,y;
	public Demo()
	{
	System.out.println("Defalult constructor"};
}
	public Demo(int a,int b)
	{
		this();
		System.out.println("parameterised ");
		this.x=a;
		this.y=b;
	}
	public void fun()
	{
		System.out.println("inside fun");
		System.out.println("value of x:+this.x");
	}
	
class ThisDemo
{
	public static void main(String arg[])
	{
		Demo obj = new Demo(10,20);
	}
}