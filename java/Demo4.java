class Demo4
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.fun();
		mobj.gun();
		System.out.println("value i from Hello1:"+Hello1.i);
		System.out.println("value i from Hello2:"+Hello2.i);
		
	}
}
interface Hello1
{
	int i = 10; 
	void fun();
	void gun();
}

interface Hello2
{
	int i = 20; 
	void fun();
}

class Marvellous implements Hello1,Hello2  //point 5
{
	public void fun()
	{
		System.out.println("inside fun");
	}
	public void gun()
	{
		System.out.println("inside gun");
	}
}