import java.util.Scanner;

public class robot {
	public static int scase(int i,int j,int n,int m){
		int right=0,down=0;
		if(i==n&&j==m)
			return 1;
		if(i>n||j>m)
			return 0;
		down=scase(i+1,j,n,m);
		right=scase(i,j+1,n,m);
		return (right+down);
	}
	public static void main(String arg[])
	{
		Scanner s=new Scanner(System.in);
		int n=s.nextInt(),m=s.nextInt();
		System.out.print(scase(1,1,n,m));
	}
}
