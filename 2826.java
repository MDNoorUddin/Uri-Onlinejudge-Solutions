
package problemsolving;

import java.util.Scanner;

public class ProblemSolving {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner input = new Scanner(System.in);
        
        String A,B;
        
        A = input.nextLine();
        
        B = input.nextLine();
        
        if(A.compareTo(B)==0)
        {
            System.out.println(A);
            System.out.println(B);
        }
        else if(A.compareTo(B)<0)
        {
            System.out.println(A);
            System.out.println(B);
        }
        else if(A.compareTo(B)>0)
        {
            System.out.println(B);
            System.out.println(A);
        }
    }
    
}
