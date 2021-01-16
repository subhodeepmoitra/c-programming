#include<iostream>
using namespace std;
class A{
    protected:
       int roll;
    public:
       void func()
       {
           cout << "Enter Roll: ";
           cin >> roll;
       }
};
class B : public virtual A 
{
    protected:
       int sem_marks;
    public:
       void sem_mark(){
           cout << "Eenter the sem marks: ";
           cin >> sem_marks;
       }
};
class C : virtual public A
{
    protected : 
        float inter_marks;
    public:
        void inter_mark(){
            cout << "Enter the internal marks: ";
            cin >> inter_marks;
        }
};
class D : public C , public B 
{
    int tot = 0;
    public:
        void show_roll(){
            cout << "The roll is: " << roll << endl;
        }
        void total(){
            tot = inter_marks + sem_marks;
            cout << "The total marks is: " << tot << endl;
        }
};
int main()
{
    D obj;
    obj.func();
    obj.sem_mark();
    obj.inter_mark();
    obj.show_roll();
    obj.total();
    return 0;
}