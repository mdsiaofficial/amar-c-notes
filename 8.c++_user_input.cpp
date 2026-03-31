#include <iostream>

int main() {

   std::string name;
   int age;

   //std::cout << "whats your name?: ";
   //std::cin >> name;

                    //to get spaces
   std::cout << "whats your name?: ";
   std::getline(std::cin, name); //getline to get spaces
                                 
   std::cout << "whats your age?: ";
   std::cin >> age;                                                                                                                       //]

   std::cout << "**********************************\n";

   std::cout << "Hello!! " << name << '\n';
   std::cout << "You are " << age << " years old.\n";

   std::cout << "**********************************\n";

  return 0;
}
         /*              // *****if getline is not in first******
           std::cout << "whats your age?: ";
           std::cin >> age;
           std::cout << "whats your name?: ";
           std::getline(std::cin >> std :: ws, name); ****look here.....
          */
