#include <iostream>

int main()
{
 double temperature;
 char unit;

 std::cout << "********Temperature conversion********\n";

 std::cout << "F= Fahrenheit\n";
 std::cout << "C= Celsius\n";
 std::cout << "What unit would you want to convert to? ";
 std::cin >> unit;
 
 if (unit == 'F' || unit =='f') {
   std::cout << "Enter the temperature in celsius: ";
   std::cin >> temperature;

   std::cout << "The temperature in fahrenheit is: " << (1.8 * temperature) + 32 << "F"<< '\n'; //*******Notice: Temperature=.... is in here. 
 }
 
 else if (unit == 'C' || unit == 'c') {
   std::cout << "Enter the temperature in fahrenheit: ";
   std::cin >> temperature;

 
   std::cout << "The temperature in celsius is: " << (temperature - 32) / 1.8 << "C"<< '\n';
 }
 
 else {
   std::cout << "invalid unit\n";
 }

 std::cout << "***************************************\n";

  return 0;
}
