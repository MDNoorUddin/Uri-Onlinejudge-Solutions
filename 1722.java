import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fib[]=new BigInteger[480];
        fib[0]=BigInteger.ONE;
        fib[1]=BigInteger.valueOf(2);
        for(int i=2;i<480;i++)
            fib[i]=fib[i-1].add(fib[i-2]);
        //for(int i=0;i<480;i++)
            //System.out.println(fib[i]);
        BigInteger a,b;
        while(input.hasNext())
        {
            a=input.nextBigInteger();
            b=input.nextBigInteger();
            if(a.compareTo(BigInteger.ZERO)==0&&b.compareTo(BigInteger.ZERO)==0)
                break;
            int count=0;
            int index=0;
            for(int i=0;i<480;i++)
            {
                if(fib[i].compareTo(a)==1||fib[i].compareTo(a)==0){
                    index=i;
                    //System.out.println(index);
                    break;
                }
                
            }
            for(int i=index;i<480;i++)
            {
                if(fib[i].compareTo(b)==1)
                    break;
                count++;
            }
            System.out.println(count);
        }
    }
    
}
