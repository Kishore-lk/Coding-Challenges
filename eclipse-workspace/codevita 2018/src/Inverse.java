import java.util.Scanner;
//import java.math.*;

public class Inverse {
	
public static void main(String arg[])
{
	Scanner s=new Scanner(System.in);
	long n=s.nextLong();
	long a[]=new long[10000000],c=0,d=1,aa[]=new long[10000000];
	int z=0;
	for(long i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			//a[(int) i]=i;
			//System.out.println(a[(int)i]);
			aa[z]=i;
			z++;
		}
		
	}    
	
	for(long i=2;i<n;i++)
	{
		c=0;
		//if(a[(int) i]!=i)
		//{
		for(long j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				for(int k=0;k<z;k++)
				{
					if(aa[k]==j||aa[k]==i)
					{
						c=1;
						break;
					}
				}
			}
			if(c==1)
				break;
		}
		if(c==0)
		{
			d++;
		}
		//}
	}
	System.out.println(d);
}
}

