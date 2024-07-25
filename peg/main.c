#include <stdio.h>
void main()
{
		int n,i,j,s;
		scanf("%d %d",&n,&s);
		int arr[n+1][n+1],x=0;
		//memset( array, [n+1] * [n+1] * sizeof( int ), 0 );
		//printf("%d %d",n,s);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
                arr[i][j]=0;
			}
		}
		if(s%2==1)
		{
			arr[(n+1)/2][(n+1)/2]=1;
			s--;
		}
		while(s>0)
		{
			x=1;
			while(x<(n+1)/2)
			{
				if(s>0)
				{
					arr[x][(n+1)/2]=arr[x][(n+1)/2]+1;
					arr[n-x+1][(n+1)/2]=arr[n-x+1][(n+1)/2]+1;
					/*arr[(n+1)/2][x]=arr[(n+1)/2][x]+1;
					arr[(n+1)/2][n-x+1]=arr[(n+1)/2][n-x+1]+1;
					arr[x][x]=arr[x][x]+1;
					arr[n-x+1][n-x+1]=arr[n-x+1][n-x+1]+1;
					arr[x][n-x+1]=arr[x][n-x+1]+1;
					arr[n-x+1][x]=arr[n-x+1][x]+1;*/
					s=s-2;
				}
				else
				{
					break;
				}
				if(s>0)
				{
					arr[(n+1)/2][x]=arr[(n+1)/2][x]+1;
					arr[(n+1)/2][n-x+1]=arr[(n+1)/2][n-x+1]+1;
					s=s-2;
				}
				else
				{
					break;
				}
				if(s>0)
				{
					arr[x][x]=arr[x][x]+1;
					arr[n-x+1][n-x+1]=arr[n-x+1][n-x+1]+1;
					s=s-2;
				}
				else
				{
					break;
				}
				if(s>0)
				{
					arr[x][n-x+1]=arr[x][n-x+1]+1;
					arr[n-x+1][x]=arr[n-x+1][x]+1;
					s=s-2;
				}
				else
				{
					break;
				}
				x++;
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
			    if(i!=j && (n-i)!=(j-1))
			    {
                    if((i!=(n+1)/2)&&(j!=(n+1)/2))
                    {
                        arr[i][j]=-1;
                    }
			    }
				printf("%d ",arr[i][j]);
			}
		}
}
