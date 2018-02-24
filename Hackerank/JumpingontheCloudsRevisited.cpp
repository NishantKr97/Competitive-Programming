import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{
public static void main(String[] args)
{ // int i,j,e;
   Scanner in = new Scanner(System.in);
   int n = in.nextInt();
   int k = in.nextInt();
   int c[] = new int[n];
   for(int c_i=0; c_i < n; c_i++)
   {
     c[c_i] = in.nextInt();
   }
    int i=0,j=0,e=0;
   while( i!=(n/k))
   {  if(c[j]==0)
       e=e+1;
      else 
       e=e+3;
      j=j+k;
      i++;
   }
   System.out.println(100-e);
}
}
