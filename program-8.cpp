/*
Problem: Simplifying a rational number
*/
#include <iostream>
class fraction
{
    private:
       int numerator;
       int denominator;
       void simplify(); //this method is responsible for simplifying the rational number
       int gcd (int a , int b); //this method is responsible for finding the gcd, a is for numerator and b is for denominator
    public:
       void getdata()
       {
           std::cout << "Enter the numerator: ";
           std::cin >> numerator;
           std::cout << "\nEnter the denominator: ";
           std::cin >> denominator;
           if(denominator == 0)
           { /* if the nenominator is 0 then the fraction is not possible */
               std::cout << "\nData Invalid\n";
               exit(1); // if the denominator is 0 then the program will terminate with exit code 1 and will pass the control to the main method
           }
       }
       void putdata()
       {
           simplify();
           std::cout << numerator << "/" << denominator;
       }
};
void fraction :: simplify()
{ /*
     THIS METHOD IS RESPONSIBLE FOR CARRYING OUT THE SIMPLIFICATION FUNCTION
    */
    std::cout << "\nThe value after proper simplification is: ";
    int commom_divisor = gcd (numerator , denominator);
    numerator = numerator / commom_divisor;
    denominator = denominator / commom_divisor;
}
int fraction :: gcd(int a , int b)
{  /*
     THIS METHOD IS RESPONSIBLE FOR CARRYING OUT THE FUNCTION OF FINDING THE GCD
   */
    if(b==0){
        return a;
    }
    else{
        return gcd(b , a%b);
    }
}
int main() //the main() body
{
    fraction obj; //obj is the object of the class fraction
    obj.getdata(); //provoking the getdata() method of the class
    obj.putdata(); //provoking the putdata() method of the class
    return 0; //if the program terminates successfully then the main method will return a success code of 0 to the compiler
}
