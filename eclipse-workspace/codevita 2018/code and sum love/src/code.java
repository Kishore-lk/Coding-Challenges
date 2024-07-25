import java.util.Scanner;

public class code {
	private static Scanner sc;

	public static void main(String ar[])
	{
		sc = new Scanner(System.in);
		int z=0,k=0,c=0;
		long sum = 0;
		long N = sc.nextLong();
		long f[]=new long[10000000],a[]=new long[10000000];
		for (long i = 0; i < N; i++) {
		final long x = sc.nextLong();
		f[z]=x;c=0;
		for(k=0;k<z;k++)
		{
			if(f[z]==f[k])
			{
				c=1;
				sum+=a[k];
				System.out.println(a[k]);
				break;
			}
		}
		if(c==0)
		{
		String str = Long.toString((long) Math.pow(2, x));
		str = str.length() > 2 ? str.substring(str.length() - 2) : str;
		a[z]= Long.parseLong(str);
		System.out.println(a[z]);
		sum+=a[z];
		}
		z++;
		}

		System.out.println(sum%100);
	}
}
