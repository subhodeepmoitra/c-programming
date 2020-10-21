#include <iostream>
using namespace std;
class Billing
{
    private:
            char name[100];//accepts the name of the customer
            char number[10];//accpets the mobile number of the customer
            int items;//accepts the number of items bought
            float price;//accepts the price
    public:
            float amount_payable = 0;//total amount to be paid
            void getData();//for accepting the details
            void putData();//for displaying the data
};
void Billing :: getData(void)
{
    cout << "\nCustomer's name: ";
    cin >> name;
    cout << "\nMobile number: ";
    cin >> number;
    cout << "\nNumber of items bought: ";
    cin >> items;
    for (int i = 1; i <= items; i++)
    {
        cout << "\nPrice of item " << i << " = ";
        cin >> price;
        amount_payable = amount_payable + price;
    }
}
void :: Billing :: putData(void)
{
    cout << "\nTotal amount payable: Rs" << amount_payable << endl;
}
int main()
{
    Billing obj;//object created for accessing the Billing class
    cout << "\n\t\t\t\t\tBilling System\t\t\t\t\n";
    obj.getData();
    obj.putData();
    return 0;//if the program runs and executes successfully then the main method method will return a success code of 0
}
