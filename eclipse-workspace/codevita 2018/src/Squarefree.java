import java.util.Scanner;

public class Squarefree {
	/*public static void prime(long n,long m,long pa[]) {
		long i;
		for(i=n;i<=m;i++)
		{
			long sqrt=(long) Math.sqrt(i);
			if(sqrt*sqrt==i)
				System.out.print(i+" ");
		}
	}*/
	public static int factors(int n,long m,long f[],long p[])
	{
		long i;
		int k=0,l=0,j,c=0,counter=0;
		for(i=n;i<=m;i++)
		{
			if(m%i==0)
			{
				f[k]=i;
				k++;
			}
			long sqrt=(long) Math.sqrt(i);
			if(sqrt*sqrt==i)
			{
				p[l]=i;
				l++;
			}
		}
		for(i=1;i<k;i++)
		{
			c=0;
			for(j=1;j<l;j++)
			{
				if(f[(int)i]%p[j]==0)
				{
					c=1;
					break;
				}
			}
			if(c==0)
			{
				counter++;
			}
		}
		return counter;
	}
	public static void main(String ar[])
	{
	Scanner s=new Scanner(System.in);
	long m=s.nextLong(),p[]=new long[1000000],f[]=new long[1000000];
	//prime(1,m,pa);
	System.out.print(factors(1,m,f,p));
	}
}
