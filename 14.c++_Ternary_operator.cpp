#include <iostream>

int main()
{
       //Ternary operator(?:) condition to an inline if-else statement
       //= condition ? expression1 : expression2;

   int grade;
   std::cout << "enter grade: ";
   std::cin >> grade;

   grade >= 32 ? std::cout << "pass\n" : std::cout << "fail\n";

  bool hungry = false;
   hungry == true ? std::cout << "You are hungry\n" : std::cout << "You are not hungry\n";
  //**OR,   hungry ? std::cout << "You are hungry\n" : std::cout << "You are not hungry/n";
  //**OR,   std::cout << (hungry ? "You are hungry\n" : "You are not hungry\n"); *********************
  return 0;
}
