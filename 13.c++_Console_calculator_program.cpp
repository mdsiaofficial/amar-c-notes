#include <iostream>

int main()
{
  char op;
  double num1, num2;

  std::cout << "*********Calculator********\n";

  std::cout << "Enter operator(+ - * /): ";
  std::cin >> op;

  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;

  switch (op) {
    
    case '+':

        std::cout << "result: " << num1 + num2 << '\n';        //Notice num1 + num2..
      break;

    case '-':

      std::cout << "result: " << num1 - num2 << '\n';
      break;

    case '*':

      std::cout << "result: " << num1 * num2 << '\n';
      break;

    case '/':
      if (num2==0) 
        std::cout << "result: Infinity\n" ;
      
      else
      std::cout << "result: " << num1 / num2 << '\n';
      break;

    default:
       std::cout << "Invalid operator\n";
      break;
  }

  std::cout << "*********Calculator********\n";
  

  return 0;
}
