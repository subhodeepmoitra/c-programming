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
    cout << "\nTotal: " << tp << endl;
	return 0;
}
