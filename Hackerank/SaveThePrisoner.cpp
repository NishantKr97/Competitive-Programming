import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)
    {
      int p,m,id,i,t;
      Scanner s = new Scanner(System.in);
      t=s.nextInt();
      //for(i=0;i<t;i++)
     // {
         // n=scan.nextInt();
          for( i=0; i<t; i++){
             p = s.nextInt();
             m = s.nextInt();
             id = s.nextInt();
            if((m+id-1)%p==0)
            System.out.println(p);
            else 
            System.out.println((m+id-1)%p);
        }
      //}
      
    }
}