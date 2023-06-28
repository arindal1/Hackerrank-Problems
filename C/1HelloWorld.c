Objective
In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges. As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.

Task
This challenge requires you to print Hello, World on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

#include <stdio.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World!\n%s", s);
    return 0;
}
