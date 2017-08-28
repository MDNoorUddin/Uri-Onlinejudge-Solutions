import java.io.IOException;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
       Scanner input = new Scanner(System.in);    
        int nunberOfCamera;
         nunberOfCamera=input.nextInt(); 
        int [][] street=new int [nunberOfCamera+1][nunberOfCamera+1];
        for(int i=0;i<=nunberOfCamera;i++)
        {
            for(int j=0;j<=nunberOfCamera;j++)         
            {          
                street[i][j]=input.nextInt();
            }            
        }
         for( int count = 0; count < nunberOfCamera; count++ )
        {            
            for( int index = 0; index < nunberOfCamera; index++ )            
            {
                int sum = street [count][index]  + street [count][index+1] + street [count+1][index] + street [count+1][index+1];
               
                if( sum >=2 )
                    
                    System.out.printf( "S" );
                
                else
                   
                    System.out.printf( "U" );             
            }
            
            System.out.printf("\n");
        }
    
    }
    
}
