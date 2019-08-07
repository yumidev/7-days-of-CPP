#include <iostream>
using namespace std;

int main()
{
    int factorial(int);
    int fact, n;
    cout << "Engter a positive integer: ";
    cin >> n;

    fact = factorial(n);

    cout << "Factorial of "<<n<<" = "<<fact;
    return 0;
}
int factorial(int n)
{
    if (n < 0)
      return(-1);
    if (n == 0)
      return(1);
    else {
      return(n*factorial(n-1));
    }
}
