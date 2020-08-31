#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void def(int n = 80, char ch = '-')
{
	int i;
	for (i=1;i<=n;i++)
		cout << ch;
}
void user()
{
	int n;
	char c;
	cout << "enter the number of characters in the line formation: ";
	cin >> n;
	cout << "\n Enter the character: ";
	cin >> c;
	for(int i=1;i<=n;i++)
		cout << c;
	cout << endl;
}
int main()
{
	int x, ch;
	cout << "Enter the choice: ";
	cin >> ch;
	switch (ch)
	{
		case 1:
		{
			def();
		}
		break;
		case 2:
		{
			user();
		}
		break;
		default :
		{
			cout << "Wrong choice";
		}
		break;
	}
	return 1;
}