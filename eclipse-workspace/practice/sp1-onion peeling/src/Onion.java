
public class Onion {
	static int peel(int n)
	{
		if(n==0)
			return 0;
		return (1+peel(n-1));
	}
public static void main(String arg[])
{
	int n=5;
	System.out.println(peel(n));
}
}