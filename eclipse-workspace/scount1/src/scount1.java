import java.util.Scanner;
import java.io.*;
import java.lang.*;
public class scount1
{
	public static void main (String[] ar)
	{
		Scanner s=new Scanner(System.in);
		String a=s.nextLine(),b=s.next(),c=s.next();
		int l1=a.length(),l2=b.length(),l3=c.length(),k=0,i,n = 0,m=0;
		String[] arr=a.split(" ");
		for(i=0;i<arr.length;i++)
		{
			/*if(b.equals(arr[i]))
			{
				n=i;
			}*/
			if(arr[i].equals(b))
				n=i;
			if(c.equals(arr[i]))
				m=i;
		}
		if(n>m)
		System.out.println(n-m-1);
		else
			System.out.println(m-n-1);	
		//System.out.println(l1);
	}
}