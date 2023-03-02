#include <iostream>
using namespace std;

void oddEven(int num)
{
  if(num & 1)
  {
    cout << "The num "<<num<<" is odd";
  }
  else
  {
    cout << "The num " << num << " is even";
  }
}

int main() {
  int n;
  cin>>n;

  oddEven(n);
  
}