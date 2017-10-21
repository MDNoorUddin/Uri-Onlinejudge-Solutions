import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fib[]=new BigInteger[1001];
        fib[0]=BigInteger.ONE;
        fib[1]=BigInteger.valueOf(2);
        for(int i=2,j=3;i<1001;i++,j++)
            fib[i]=fib[i-1].multiply(BigInteger.valueOf(j));
        String str;
        while(input.hasNext())
        {
            str=input.next();
            int len=str.length();
            int x[] =new int[26];
            for(int i=0;i<26;i++)
                x[i]=0;
            for(int i=0;i<len;i++)
            {
                char d=str.charAt(i);
                x[d-65]++;
            }
            BigInteger divider=BigInteger.ONE;
            for(int i=0;i<26;i++)
            {
                if(x[i]>1)
                {
                    divider=divider.multiply(fib[x[i]-1]);
                }
            }
            divider=(fib[len-1].divide(divider));
            divider=divider.mod(BigInteger.valueOf(1000000007));
            System.out.println(divider);
        }
    }
    
}
