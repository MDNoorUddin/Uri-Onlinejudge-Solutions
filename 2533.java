import java.util.*;
import java.io.IOException;
public class Main {
 
    public static void main(String[] args) throws IOException {
         Scanner sc=new Scanner(System.in);
         int t;
         while(sc.hasNext()){
         t=sc.nextInt();
         float d=0,e=0;
         for(int i=1;i<=t;i++)
         {
             int N,C;
             N=sc.nextInt();
             C=sc.nextInt();
             d=d+(N*C);
             e=e+C;
         }
         e=e*100;
         float x=d/e;
         System.out.printf("%.4f\n",x);
         }
 
    }
 
}
