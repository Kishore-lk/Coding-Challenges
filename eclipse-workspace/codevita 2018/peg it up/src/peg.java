import java.util.Scanner;
public class peg {
	private static Scanner s;
	public static void main(String ar[])
	{
		s = new Scanner(System.in);
		int n=s.nextInt(),i,j,p=s.nextInt(),l=0;
		int mat[][]=new int[n+1][n+1];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i!=j && (n-i)!=(j-1)&&(i!=(n+1)/2)&&(j!=(n+1)/2))
				{
					mat[i][j]=-1;
				}
				else
				{
					mat[i][j]=0;
				}
			}
		}
		if(p%2==1)
		{
			mat[(n+1)/2][(n+1)/2]=1;
			p--;
		}
		while(p>0)
		{
			l=1;
			while(l<(n+1)/2)
			{
				if(p>0)
				{
					mat[l][(n+1)/2]=mat[l][(n+1)/2]+1;
					mat[n-l+1][(n+1)/2]=mat[n-l+1][(n+1)/2]+1;
					p-=2;
				}
				else
				{
					break;
				}
				if(p>0)
				{
					mat[(n+1)/2][l]=mat[(n+1)/2][l]+1;
					mat[(n+1)/2][n-l+1]=mat[(n+1)/2][n-l+1]+1;
					p=p-2;
				}
				else
				{
					break;
				}
				if(p>0)
				{
					mat[l][l]=mat[l][l]+1;
					mat[n-l+1][n-l+1]=mat[n-l+1][n-l+1]+1;
					p-=2;
				}
				else
				{
					break;
				}
				if(p>0)
				{
					mat[l][n-l+1]=mat[l][n-l+1]+1;
					mat[n-l+1][l]=mat[n-l+1][l]+1;
					p-=2;
				}
				else
				{
					break;
				}
				l++;
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==n && j==n)
					System.out.print(mat[i][j]);
				else
				System.out.print(mat[i][j]+" ");
			}
		}	
	}
}
