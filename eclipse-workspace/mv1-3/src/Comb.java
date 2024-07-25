
import java.util.Scanner;


public class Comb {
private static Scanner s;

static int combination(int a[],int ss[],int n,int i,int j,int p,int c,int sum)
{
	//int c=0,sum=1;
	if(i==n)
	{
		//sum=1;
		for(int k=0;k<j;k++)
		{
			System.out.print(ss[k]);
			sum*=ss[k];
		}
			System.out.println(" "+sum);
		
		if(sum%p==0)
		{
			c++;
			System.out.println(c);
			
		}
		//System.out.println(" ");
		return c;
	}
	ss[j]=a[i];
	c=combination(a,ss,n,i+1,j+1,p,c,1);
	c=combination(a,ss,n,i+1,j,p,c,1);
	return c;
}

public static void main(String arg[])
{
	s = new Scanner(System.in);
	int n=s.nextInt(),p=35;
	int a[] = new int[n],ss[]=new int[n];//{0,0,0};
	for(int i=0;i<n;i++)
		a[i]=s.nextInt();
	System.out.println(combination(a,ss,n,0,0,p,0,1));
}
}