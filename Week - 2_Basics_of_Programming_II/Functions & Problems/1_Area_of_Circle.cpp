#include <iostream>
using namespace std;

double areaOfCircle(double radius)
{
  double pi = 3.14;
  double area = pi * radius * radius;
  return area;
}

int main() {
  double n;
  cin>>n;

  cout << "Area of circle:" << areaOfCircle(n);
  

}