#include <iostream>

int main()
{
  int temp;

  std::cout << "Enter the temperature: ";
  std::cin >> temp;

  if (temp >= 0 && temp <= 30) {
     std::cout << "It is a nice day.\n";
  }
    else if(temp < 0 || temp > 30) {
     std::cout << "It is not a nice day.\n";
  }
    else {
  std::cout << "invalid temperature.\n";
  }

  bool rain=false;

  if (!rain) {                  //meaning !rain expreesion will be outputed when [bool rain=false]
    std::cout << "It is not raining.\n";
  
  }
  else {                        // in bool == true is not needed ex: if(rain), else if(rain)
    std::cout << "It is raining.\n";
    
  }
  return 0;
}
