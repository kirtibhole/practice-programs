import java.util.*;

class InputArray
{
	public static void main(String arg[])
	{
		int iSize = 0, i=0 ,iSum=0;
		int arr[];
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array:");
		iSize = sobj.nextInt();
		
		arr = new int[iSize]; //array dyanamically created
		
		System.out.println("Enter the element");
		for(i=0;i < arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		for(i=0;i < arr.length;i++)
		{
			iSum = iSum + arr[i];
		}
		System.out.println("Addition of all elements:" +iSum);
		
	}
}
