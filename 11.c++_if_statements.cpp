#include <iostream>

int main () 
{
  int age;

  std::cout << "whats your age?: ";
  std::cin >> age;

 if (age >= 100) {
    std::cout << "You are too old.\n";
  }

 else if (age >= 18){                         // Notice >=18 is in second else if because it overlaps with >=100 condition
    std::cout << "welcome to our website.\n";   // thats way this >=18 in second. if condition starts from first hence both condition works.
  }
 
  else if (age < 0 )  {
    std::cout << "You are not yet born.\n";
  }
  
  else {
    std::cout << "You are not old enough to enter our website.\n";
  }


  return 0;
}
