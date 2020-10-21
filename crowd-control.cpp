#include <iostream>
using namespace std;
class Crowd
{
    private:
            int purchase;//total number of purchases made in one minute
            int counters_engaged;//total number of counters engaged in one minute
            int exit;//customers exiting in one minute
            int staffs;//total staffs present in one minute
            int customers;//number of customers in the shop
    public:
           int immediate_exit=0;//number of people to be removed immediately
           int total;//total number of people inside the shop
           int customers_allowed=0;//number of new customers to be allowed entry, depending upon the current crowd status
           void getData();//accepting the data for processing
           void checkData();//checking and displaying the status of crowd control;
};
void Crowd :: getData(void)
{
    cout << "\nStaffs present: ";
    cin >> staffs;
    cout << "\nPurchases in 1 minute: ";
    cin >> purchase;
    cout << "\nCounters engaged in 1 minute: ";
    cin >> counters_engaged;
    cout << "\nCustomers entered: ";
    cin >> customers;
    cout << "\nCustomers left in the last 1 minute: ";
    cin >> exit;
}
void Crowd :: checkData(void)
{
    total = (staffs + customers)-exit;
    if (total > 20)
    {
        cout << "Status: Over-crowding" << endl;
        immediate_exit = total - 20;
        cout << "People to be removed immediately: " << immediate_exit << endl;
    }
    else if (total < 20)
    {
        cout << "Status: Normal" << endl;
        customers_allowed = 20 - total;
        cout << "Number to persons to be granted entry: " << customers_allowed << endl;
    }
}
int main()
{
    Crowd obj;
    cout << "\n********** Crowd Control System  **********\n";
    obj.getData();
    obj.checkData();
    return 0;
}
