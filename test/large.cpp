#include <iostream>
using namespace std;

int main()
{
  int var1, var2, var3;

  cout << "Input first number: ";
  cin >> var1;
  cout << "Input second number: ";
  cin >> var2;
  cout << "Input third number: ";
  cin >> var3;

  if ((var1 - var2) > 0) {
    if ((var1 - var3) > 0) {
      cout << "The largest number is: " << var1 << endl;
    } else {
      cout << "The largest number is: " << var3 << endl;
    }
  } else if ((var2 - var3) > 0) {
    cout << "The largest number is: " << var2 << endl;
  } else {
    cout << "The largest number is: " << var3 << endl;
  }

  cout << "This line is executed always.";
}
