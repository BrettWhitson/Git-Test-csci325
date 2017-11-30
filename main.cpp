#include <iostream>

using namespace std;

int sum(int n);

int main()
{
  int num;
  
  cout << "Hello World!" << endl;
  cout << "Please enter a number: ";
  cin >> num;
  num = sum(num);
  cout << "Sum: " << num << endl;
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