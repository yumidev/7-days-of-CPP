#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter an integer: ";
  cin >> num;

  // check whether the number is odd or not
  if ( num % 2 ) {
    cout << "You entered an odd number: " << num << endl;
  }
  else {
    cout << "You entered an even number: " << num << endl;
  }

  cout << "This statement is always executed.";
  return 0;
}
