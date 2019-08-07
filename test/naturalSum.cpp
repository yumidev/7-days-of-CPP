#include <iostream>
using namespace std;

int main() {
  int sum(int);
  int n, result;

  cout << "Enter a positive number bigger than 1 : ";
  cin >> n;

  if (n <= 1) {
    cout << "Your number is not bigger than 1";
    return 0;
  }

  result = sum(n);

  cout << "Sum of the natural numbers from "<<n<<" to 1 is "<<result<<endl;
  return 0;
}

int sum(int n) {
  if (n != 0)
    return n + sum(n-1);
  return 0;
}
