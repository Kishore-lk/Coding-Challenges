import java.util.*;
public class p188 {
    public static void main(String[] args) {
		//Your Code Here
    Scanner s=new Scanner(System.in);
    String a=s.nextLine(),d[]=a.split(" ");
    char b[]=a.toCharArray();
    int i,l=b.length,k=0,c=0,j;
    for(i=0;i<l;i++)
    {
        c=i;
        while(b[i]>='0'&&b[i]<='9'&&i<l)
        {
            i++;
            k=i;
            if(k>=l)
            	break;
            if(b[k]=='.'&&k<l)
            {
                for(j=c;j<=k;j++)
                System.out.print(b[j]);
                k++;
            while(b[k]>='0'&&b[k]<='9'&&k<l)
            {
                System.out.print(b[k]);
                k++;
                if(k==l)
                break;
            }
            i=k;
            if(i<l)
            System.out.println();
            }
            if(i>=l)
            break;
        }
    }
	}
}