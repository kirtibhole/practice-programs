class Demo
{
	public int i;
	public final int j;
	
	public Demo()
	{
		i=20;
		j=11;
	}
}

class Finalchar
{
	public static void main(String arg[])
	{
		Demo obj = new Demo();
		System.out.println("vlaue of j is:"+obj.j);
		//obj.j++;
		//obj.j++; //NA j=j+1
	}
}