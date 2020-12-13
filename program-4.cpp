#include "date.h"
#include<iostream>
using namespace std;
class Date_increment{
    private:
        int date;
        int month;
        int year;
    public:
        void getdata();
        void putdata();
};
void Date_increment :: getdata()
{
    cout << "\nDate(dd): ";
    cin >> date;
    cout << "\nMonth(mm): ";
    cin >> month;
    cout << "\nYear(yyyy): ";
    cin >> year;
}
void Date_increment :: putdata()
{
    cout << "\n########## OUTPUT SECTION ##############\n";
    int check;
    check = leapyear(year);
    if(check == 0)
    {
        if(((date == 31) && (month == 1))||((date == 31) && (month == 3))||((date == 31) && (month == 5))||((date == 31) && (month == 7))||((date == 31) && (month == 8))||((date == 31) && (month == 10)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else if ((date == 31) && (month == 12))
        {
            cout << "Date: 01" << endl;
            cout << "Month: 01" << endl;
            cout << "Year: " << ++year << endl;
        }
        else if ((date == 29) && (month == 02))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else if(((date == 30) && (month == 4))||((date == 30) && (month == 6))||((date == 30) && (month == 9))||((date == 30) && (month == 11)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else
        {
            cout << "Date: " << ++date << endl;
            cout << "Month: " << month << endl;
            cout << "Year: " << year << endl;
        }
        
        //Write here
    }
    //code for non-leap year date increment else if case
    else if(check == 1)
    {
        if(((date == 31) && (month == 1))||((date == 31) && (month == 3))||((date == 31) && (month == 5))||((date == 31) && (month == 7))||((date == 31) && (month == 8))||((date == 31) && (month == 10)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else if ((date == 31) && (month == 12))
        {
            cout << "Date: 01" << endl;
            cout << "Month: 01" << endl;
            cout << "Year: " << ++year << endl;
        }
        else if ((date == 28) && (month == 02))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else if ((date == 29) && (month == 02))
        {
            cout << year << " is not leap-year, so this date is not possible";
        }
        else if(((date == 30) && (month == 4))||((date == 30) && (month == 6))||((date == 30) && (month == 9))||((date == 30) && (month == 11)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else
        {
            cout << "Date: " << ++date << endl;
            cout << "Month: " << month << endl;
            cout << "Year: " << year << endl;
        }
        
    }
    // OTHER EXCEPTION CASES
    
}
int main()
{

    Date_increment di;
    di.getdata();
    cout << "The next date is:-" << endl;
    di.putdata();
    return 0;
}