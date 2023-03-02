#include <iostream>
using namespace std;

int factorial(int num)
{
  int fact = 1;
  for(int i=num; i>=1; i--)
  {
    fact = fact * i;
  }
  return fact;
}

int main() {
  int n;
  cin>>n;

  cout<< "The factorial of "<< n << " is "<< factorial(n);
  

}