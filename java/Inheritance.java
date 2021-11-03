class Base
{
	public int x;
	public int y;
	
	public Base()
	{
		System.out.println("Base constructor");
		this.x = 0;
		this.y = 0;
	}
	
	Base(int i,int j)
	{
		System.out.println("Base constructor");
		
		this.x=i;
		this.y=j;
	}
	
	public void fun()
	{
		System.out.println("Base fun");
	}
}
class Derived extends Base
{
	public int a,b;
	public Derived()
	{
		System.out.println("Derived constructor");
		this.a =0;
		this.b = 0;
	}
	public Derived(int iNo1,int iNo2)
	{
		System.out.println("Derived constructor");
		this.a =iNo1;
		this.b = iNo2;
	}
	public void gun()
	{
		System.out.println("Derived gun");
	}
}

class Inheritance
{
	public static void main(String arg[])
	{
		Base bobj = new Base();
		bobj.gun();
		
		Derived  dobj = new Derived();
		dobj.gun()
	
		System.out.println();
	
	}
		
}