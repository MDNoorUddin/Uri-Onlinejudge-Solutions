import java.util.*;
import java.math.*;

    import 

    public class Main{

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String x;
        x=sc.next();
        String temp=new String();
        String aux=new String();
        int count=0;
        Boolean dot=false;
        int c=0;
        for(int i=0;i<x.length();i++)
        {
            if(x.charAt(i)<='9'&&x.charAt(i)>='0')
            {
                if(dot)
                    c++;
                count++;
                if(count<=11&&!dot)
                    temp=temp+Character.toString(x.charAt(i));
                else
                {
                    if(c<3)
                     aux=aux+Character.toString(x.charAt(i));
                }
            }
            if(x.charAt(i)=='.'){
                dot=true;
                aux=aux+Character.toString(x.charAt(i));
            }
        }
        System.out.println("cpf "+temp);
        //System.out.println(aux);
        double first=Double.parseDouble(aux);
        x=sc.next();
        String Aux=new String();
        c=0;
        dot=false;
        for(int i=0;i<x.length();i++)
        {
            if(x.charAt(i)<='9'&&x.charAt(i)>='0')
            {
                if(dot)
                    c++;
                    if(c<3)
                     Aux=Aux+Character.toString(x.charAt(i));
                
            }
            if(x.charAt(i)=='.'){
                dot=true;
                Aux=Aux+Character.toString(x.charAt(i));
            }
        }
        double second=Double.parseDouble(Aux)+first;
        System.out.printf("%.2f\n",second);
    }
}
