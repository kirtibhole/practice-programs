class Demo4
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.fun();
		mobj.gun();
	}
}
interface Hello1
{
	int i = 10; 
	void fun();
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
	
}