
import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
      Scanner input = new Scanner(System.in);
       int Q ;
       while((Q=input.nextInt())!=0)
       {           
           int D = input.nextInt();
           int P = input.nextInt();
           int page = ((P*Q)*(-D))/(Q-P);
           if(page==1)
               System.out.println("1 pagina");
           else
               System.out.println(page +" paginas");
       }         
    }     
}
