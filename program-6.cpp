#include<iostream>
class Rectangle;  //desatination class declaration
class Square  //source class
{
    private:
       int side;
    public:
       Square(int s)
       {//body of the constructor
           side = s;
       }
       int get_side()
       {
           return side;
       }
};
class Rectangle //destination class
{
    private:
       int length , breadth;
    public:
       Rectangle (int l , int b)
       {//body of the constructor
           length = l;
           breadth = b;
       }
       Rectangle (Square S)
       {
           int sqr_side = S.get_side();
           length = breadth = sqr_side;
       }
       void show_data()
       {
           std::cout << "\nLength = " << length << " and breadth = " << breadth;
       }
};
int main()
{
    int len, brd, sd;
    std::cout << "Enter length = ";
    std::cin >> len;
    std::cout << "\nEnter breadth = ";
    std::cin >> brd;
    Rectangle R(len , brd);
    R.show_data();
    std::cout << "\nEnter side = ";
    std::cin >> sd;
    Square S(sd);
    R = S; //Rectangle = Square and calls the parameterised constructor Square(int s)
    R.show_data();
    return 0;
}