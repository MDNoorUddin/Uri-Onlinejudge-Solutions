
import java.util.*;
import java.math.*;
    import java.sql.*;

    public class Main{

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String x;
        while(sc.hasNext()){
        x=sc.next();
        String r=new String();
        String l=new String();
        String j=new String();
        boolean plus=false;
        boolean equal=false;
        for(int i=0;i<x.length();i++)
        {
            if(x.charAt(i)=='+'){
                plus=true; continue;
            }
            if(x.charAt(i)=='='){
                equal=true; continue;
            }
            if(!plus&&!equal) r=r+Character.toString(x.charAt(i));
            else if(plus&&!equal) l=l+Character.toString(x.charAt(i));
            else if(plus&&equal) j=j+Character.toString(x.charAt(i));
        }
        if(r.equals("R"))
        {
            int J=Integer.parseInt(j);
            int L=Integer.parseInt(l);
            System.out.println(J-L);
        }
        if(l.equals("L"))
        {
            int J=Integer.parseInt(j);
            int R=Integer.parseInt(r);
            System.out.println(J-R);
        }
        if(j.equals("J"))
        {
            int R=Integer.parseInt(r);
            int L=Integer.parseInt(l);
            System.out.println(L+R);
        }
    }
    }
}
