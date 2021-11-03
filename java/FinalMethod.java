class Base
{
    public void fun()
	{
		System.out.println("Base fun");
	}		
	public final void gun() //Method  that we cant override in java when we used final keyword
	{
		System.out.println("Base gun");
	}
}
class Derived extends Base
{
	public void fun()  //override
	{
		System.out.println("Derived fun");
	}		
	/*public final void gun()
	{
		System.out.println("Base gun");
	}*/
	
}


class FinalMethod
{
	public static void main(String arg[])
	{
		Base bobj = new Derived(); //Upcasting
		bobj.fun();
	}
}

