import java.util.Scanner;

public class combin {
	private static Scanner s;
	public static void comb(int a[],int n,int ss[],int i,int j)
	{
		if(i==n)
		{
			int k;
			for(k=0;k<j;k++)
				System.out.print(ss[k]);
			System.out.println();
			return ;
		}
		ss[j]=a[i];
		comb(a,n,ss,i+1,j+1);
		comb(a,n,ss,i+1,j);
	}
	public static void main(String args[])
	{
		s = new Scanner(System.in);
		int n,i;
		n=s.nextInt();
		int a[]=new int[n],ss[]=new int[n];
		for(i=0;i<n;i++)
			a[i]=s.nextInt();
		comb(a,n,ss,0,0);
	}
}
