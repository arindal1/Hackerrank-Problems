/* This exercise is to test your understanding of Java Strings. A sample String declaration:

String myString = "Hello World!"
The elements of a String are called characters. The number of characters in a String is called the length, and it can be retrieved with the String.length() method.

Given two strings of lowercase English letters,  and , perform the following operations:

Sum the lengths of  and .
Determine if  is lexicographically larger than  (i.e.: does  come before  in the dictionary?).
Capitalize the first letter in  and  and print them on a single line, separated by a space. */


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println(A.length()+B.length());
        if(B.compareTo(A)<0) {
        	System.out.println("Yes");
        }
        else if(B.compareTo(A)>0) {
        	System.out.println("No");
        }
        else if(B.compareTo(A)==0) {
        	System.out.println("No");
        }
        String a = "" + A.charAt(0);
        String b = "" + B.charAt(0);
        System.out.println(a.toUpperCase() + A.substring(1) +" " + b.toUpperCase() + B.substring(1));
    }
}
