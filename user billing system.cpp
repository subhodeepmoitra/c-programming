// Simple Billing Management System
/*
CODE BY : SUBHODEEP MOITRA
CODING PLATFORM DETAILS:
          OS USED: WINDOWS 10
          TESTED ON : WINDOWS 10 , UBUNTU 20.04.1 LTS , KALI 
          PLATFORM DEPENDENCY OF THE CODE : CODE IS PLATFORM INDEPENDENT
                                            CODE CAN BE COMPILED IN ANY ENVIRONMENT AND IN ANY GCC COMPILER VER.
          PLATFORM DEPENDENCY OF THE BUILD AFTER FILE:
                THE FILE AFTER SUCCESSFULLY BUILD AND COMPILED IS NOT PLATFORM DEPENDENT.
                THERE ARE DEPENDENCIES IN THE ENVIRONMENT.
*/
#include<iostream>
using namespace std;
class ItemDetails{
	public:
		int item_code;
		int no;
		int item_price;
};
class Calculate : public ItemDetails{
	public:
		int total;
		void accept_details()
		{
			cout << "\nItem Code: ";
			cin >> item_code;
			cout << "\nNumber of purchase: ";
			cin >> no;
			cout << "\nPrice: Rs";
			cin >> item_price;
			total = no*item_price;
		}
		void display_details(){
			cout << "\nTotal Price: Rs" << total;
		}
};
int main()
{
	int i , cnt , n=0 , price = 0 , tp = 0;
	Calculate dt[100];
	cout << "\n*************************** BILLING SYSTEM ***************************";
	cout << "\nHow many items (Max 100)? ";
	cin >> cnt;
	for (i=1;i<=cnt;i++){
		dt[i].accept_details();
	}
    for (i=1;i<=cnt;i++){
    	dt[i].display_details();
	}
	for (i=1;i<=cnt;i++){
		price = price + dt[i].item_price;
	}
	for (i=1;i<=cnt;i++){
		tp = tp + price;
	}
    cout << "\nTotal: Rs" << tp << endl;
	return 0;
}
