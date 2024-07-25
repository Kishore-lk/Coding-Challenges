import java.util.Scanner;
import java.io.*;
import java.lang.*;
public class scount
{
	public static void main (String[] ar)
	{
		Scanner s=new Scanner(System.in);
		String a=s.nextLine(),b=s.next(),c=s.next();
		int l1=a.length(),l2=b.length(),l3=c.length(),k=0,i,n = 0,m=0;
		for(i=0;i<l1;i++)
		{
			if(a.charAt(i)==b.charAt(k)&&k<l2)
			{
				k++;i++;
				while(a.charAt(i)==b.charAt(k)&&k<l2) {
				if(k==l2-1)
				{
					n=i;
					break;
				}
				}
				i++;k++;
			}
		}k=0;
			for(i=0;i<l1;i++)
			{
				if(a.charAt(i)==b.charAt(k)&&k<l3)
				{
					k++;i++;
					while(a.charAt(i)==c.charAt(k)&&k<l3) {
					if(k==l3-1)
					{
						m=i;
						break;
					}
					i++;k++;
					}
					
				}
			}
			System.out.println(n+" "+m);
	}
}