#include <iostream>
#include <cmath>

int main()
{
  double a,b,c;

  std::cout << "*******************************\n";

  std::cout << "Enter the length of side a: ";
  std::cin >> a;

  std::cout << "Enter the length of side b: ";
  std::cin >> b;

  c = sqrt( pow(a,2) + pow(b,2) );

  std::cout << "The length of the hypotenuse is: " << c << '\n';

  std::cout << "*******************************\n";
  return 0;
  
}
