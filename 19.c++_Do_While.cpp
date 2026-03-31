#include <iostream>

int main() 
{
   /*DO WHILE LOOP = do the block of code first and then check the condition.

     do {
       code block
     } while (condition);
   */

  /*
    int num=1;
   do {
    std::cout << num << '\n';
    num++;
  } while (num <= 10);
  */
  
  int num;

   do {
    
     std::cout << "Enter a Positive number: ";
     std::cin >> num;

  } while (num < 0 );

   std::cout << "Your Positive number is: " << num << '\n';


  return 0;
}
