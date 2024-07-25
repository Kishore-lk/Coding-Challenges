import java.util.Scanner;

public class stair {
	public static int staircase(int i,int n){
		if(i==n)
			return 1;
		if(i>n)
			return 0;
		return (staircase(i+1,n)+(staircase(i+2,n)));
	}
	public static void main(String arg[])
	{
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		System.out.print(staircase(0,n));
	}
}
