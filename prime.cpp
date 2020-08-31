#include<iostream>
using namespace std;
int prime (int);// prototype declaration
int prime (int n)
{
  int i,c=0;//c is the counter
  for (i=1;i<=n;i++)
  {
    if(n%i==0)
      c++;
  }
  
  /* if the value of counter is 2
  then the number is prime
  else not prime */

  if (c==2)
    return 1;
  else
    return 0;
}

int main()
{
  int n,p;
  cout << "\n Input a positive number : ";
  cin >> n;
  p = prime(n);
  if(p == 1)
        cout << " The number prime number \n";
  else if(p == 0)
        cout << " The number not a prime number \n";
  return 0;
}

