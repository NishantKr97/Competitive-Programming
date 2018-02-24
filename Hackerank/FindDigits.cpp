import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++)
        {
            int n = in.nextInt();
            int m=n,a,b,count=0;
            while(m!=0)
            {
                a=m%10;
                m=m/10;
                if(a!=0)
                 if(n%a==0)
                    count++;
            }
            System.out.println(count);
        }
    }
}
