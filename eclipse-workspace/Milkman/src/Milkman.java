import java.util.*;
import java.lang.*;
import java.io.*;
public class Milkman {
	public static void main(String ar[])
	{
		int n,i=0,b=0;
		int[] m=new int[100];
		int[] a=new int[100];
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
		for(i=0;i<n;i++)
		{
			b=0;
			m[i]=s.nextInt();
			while(m[i]>0)
			{
				if(m[i]>=10)
				{
					b+=m[i]/10;
					m[i]=m[i]%10;
				
				}
				else if(m[i]>=7)
				{
					b+=m[i]/7;
					m[i]=m[i]%7;
					
				}
				else if(m[i]>=5)
				{
					b+=m[i]/5;
					m[i]=m[i]%5;
				}
				else
				{
					b+=m[i]/1;
					m[i]=m[i]%1;
				}
			}
			a[i]=b;
		}
		for(i=0;i<n;i++)
			System.out.println(a[i]);
	}

}