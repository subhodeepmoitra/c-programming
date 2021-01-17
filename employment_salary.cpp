#include <iostream>
using namespace std;
class Employee_details{
    // CLASS FOR ACCEPTING THE DETAILS OF THE EMPLOYEE
    protected:
        char employee_name[100];
        int employee_id;
        char employee_designation[50];
    public:
        void accept_employee_details(){
            cout << "Name of employee: ";
            cin >> employee_name;
            //fflush (std);
            cout << "Employee ID: ";
            cin >> employee_id;
            cout << "Employee Designation: ";
            cin >> employee_designation;
            //fflush (std);
        }
};
class Basic_pay : public virtual Employee_details{
    protected:
         float basic_pay;
    public:
         void accept_basic_pay(){
             cout << "Enter the basic pay: ";
             cin >> basic_pay;
         }
};
class Other_allowances : public virtual Employee_details{
    protected:
        float dearness_allowances;
        float housing_allowances;
        float travel_allowances;
    public:
        void accept_other_allowances(){
            cout << "Enter the DA: ";
            cin >> dearness_allowances;
            cout << "Enter HRA: ";
            cin >> housing_allowances;
            cout << "Enter travel allowances: ";
            cin >> travel_allowances;
        }
};
class Tax_deduction_at_source : public Other_allowances , public Basic_pay{
    float total=0, tax=0, in_hand=0;
    public:
        void show_details(){
            cout << "\n---------------------------\n";
            cout << "Employee ID: " << employee_id << endl;
        }
        void salary(){
            total = basic_pay + dearness_allowances + housing_allowances + travel_allowances;
            if (total < 100000){
                tax = 0;
                in_hand = total - tax;
            }
            else if ((total >= 100000) && (total < 250000)){
                tax = total * 0.05;
                in_hand = total - tax;
            }
            else if (total >= 250000){
                tax = total * 0.15;
                in_hand = total - tax;
            }
            cout << "Total Salary Rs" << total << endl;
            cout << "Tax deducted at source Rs" << tax << endl;
            cout << "The in hand salary is Rs" << in_hand << endl;
        }
};
int main(){
    Tax_deduction_at_source tds;
    tds.accept_employee_details();
    tds.accept_basic_pay();
    tds.accept_other_allowances();
    tds.show_details();
    tds.salary();
    return 0;
}