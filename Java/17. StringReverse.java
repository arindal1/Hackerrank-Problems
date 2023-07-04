/* A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward or forward.

Given a string , print Yes if it is a palindrome, print No otherwise. */


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
         Solution s = new Solution();
        if (s.reverse(A)) {
            System.out.print("Yes");
        }
        else {
            System.out.print("No");
        }
    }
    
    public boolean reverse(String n) {
        boolean a = false;
        String x = "";
        for (int i = n.length()-1; i >= 0; i--) {
            x=x.concat(""+n.charAt(i));
        }
        if (n.equals(x)) {
            a = true;
        }
        return a;
    }
}
