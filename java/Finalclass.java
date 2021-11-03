class Finalclass
{
	public static void main(String arg[])
	{
		Base bobj = new Base();
		bobj.fun();
		
		Demo dobj = new Demo();
		dobj.gun();
	}
}

final class Base
{
	public int i;
	public void fun()
	{
		System.out.println("Base fun");
	}
}
Class Demo
{
	public Base bobj;  // public Base boj =new Base(); yane immidiatly object tayar hoto jo 1 memory vaya ghalavto
	public Demo()
	{
		bobj = new Base();  // if we create of object  after constructor then to object cretae karn changl ahe
	}
	public void gun()
	{
		bobj.fun();
	}
}
/*class Derived extends Base
{
}*/