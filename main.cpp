#include <iostream>

using namespace std;

int sum(int n);
int product(int n);

int main()
{
  int num;
  int num1;
  int num2;
  
  cout << "Hello World!" << endl;
  cout << "Please enter a number: ";
  cin >> num;
  num1 = sum(num);
  num2 = product(num);
  
  cout << "Sum: " << num1 << endl;
  cout << "Product: " << num2 << endl;
  return 0;
}

int sum(int n)
{
  int num = 0;
  for(int i = 0; i <= n; i++)
    {
      num += i;
    }
  return num;
}

int product(int n)
{
  int num = 1;
  for(int i = 1; i <= n; i++)
    {
      num *= i;
    }
  return num;
}