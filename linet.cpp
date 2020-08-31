#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void defaultc(int n = 80 , char ch = '-')
{
	for(int i = 1; i <= 80; i++)
		cout << ch;
	cout << "\n";
}
void user()
{
	int n, l;
	char ch;
	cout << "\n Enter the total number of characters used for the line: ";
	cin >> n;
	cout << "\n Enter the character: ";
	cin >> ch;
	cout << "\n How many lines you want to print: ";
	cin >> l;
	for(int i = 1; i <= l; i++)
	{
        for(int j = 1; j <= n; j++)
        	cout << ch;
        cout << endl;
	}
	cout << "\n";
}
int main()
{
	char ch, c;int n;
	cout << "\n Do you wish to continue with the default case(Y/N): ";
	cin >> ch;
	if (ch == 'y')
		defaultc(80, '-');
	else if (ch == 'n')
		user();
	cout << "\n Successfully Executed \n";
	return 0;
}