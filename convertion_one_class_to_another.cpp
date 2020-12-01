//Program to convert one class type to another
#include<iostream>
using namespace std;
class example1
{
    int value1;
    public:
           example1(){}
           example1(int x)
           {
               value1 = x;
           }
           int getdata()
           {
               return value1;
           }
           void putdata()
           {
               cout << "The value of object2 is: " << value1;
           }
};
class example
{
    int a,b,c;
    public:
            example(){}
            example (int x, int y, int z)
            {
                a=x;
                b=y;
                c=z;
            }
            example (example1 s)
            {
                a = s.getdata();
                b = s.getdata();
                c = s.getdata();
            }
            operator int ();
            operator example1()
            {
                return example1(a+b+c);
            }
            void putdata()
            {
                cout << "The value of a, b and c " << a << " " << " " << b << " " << c << endl;
            }
};
example ::operator int()
{
    return (a*b*c);
}
int main()
{
    example obj (10,20,30);
    example1 obj1;
    int value;
    value = obj;
    cout << "The value is: " << value << endl;
    obj1 = obj;
    obj.putdata();
    example1 obj2(30);
    example obj3;
    obj3 = obj2;
    obj3.putdata();
    return 0;
}