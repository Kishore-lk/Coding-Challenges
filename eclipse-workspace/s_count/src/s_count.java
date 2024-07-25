import java.util.Scanner;
import java.io.*;
public class scount
{
	public static void main (String ar[])
	{
		Scanner s=new Scanner(System.in);
		String a=s.nextLine(),b=s.next(),c=s.next();
		int l1=a.length(),l2=b.length(),l3=c.length(),k=0,i,n,m;
		for(i=0;i<l1;i++)
		{
			if(a.charAt(i)==b.charAt(k))
			{
				k++;i++;
				while(a.charAt(i)==b.charAt(k)&&a.charAt(k)<l2) {
				if(b.charAt(k)==l2-1)
				{
					n=i;
					break;
				}
				
			}
		}k=0;
			for(i=0;i<l1;i++)
			{
				if(a.charAt(i)==b.charAt(k))
				{
					k++;i++;
					while(a.charAt(i)==c.charAt(k)&&a.charAt(k)<l3) {
					if(c.charAt(k)==l3-1)
					{
						m=i;
						break;
					}
					
				}
			}
				System.out.print(n +" "+m);
	}
}