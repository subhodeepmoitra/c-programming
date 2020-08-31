/* 
 * File:   main.cpp
 * Author: subhodeep
 *
 * Created on 22 August 2020, 9:15 AM
 */
// a program to print the fibonacci series upto n terms
#include<iostream>
int fibonacci(int); // function prototype declaration
int fibonacci(int n) // function where the fubonacci operation will be calculated 
{
    int a=0,b=1,s=0,i;
    for (i=0;i<n;i++) // loop
    {
        printf(" %d ",s);
        a=b;
        b=s;
        s=a+b;
    }
}
int main() // main function which will return an integer type value
{
    int n;
    printf("\n Enter the number of terms: ");
    scanf("%d",&n);
    printf("The fibonacci series are: \n");
    fibonacci(n); // function calling from main method 
    return 0; // return statement 
}

