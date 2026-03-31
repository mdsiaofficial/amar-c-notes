#include <iostream>

int main () {
  
  std::string name;

  std::cout << "whats your name?: ";
  std::getline(std::cin, name);
  

  if (name.length() > 10) {//***********************************************
    std::cout << "your name is too long\n";
  }

  else if(name.empty()) {//*************************************************
    std::cout << "Empty.\n";
    
  }

  else {
    std::cout << "your name is: " << name << '\n';
  }                                              //                 01234567
                                                 //Entered name is: Rahim ah

 /* name.clear(); //clears the string  ********************* output:        
    name.erase(0,5); //clears the string from 0 to 5 ******* output: ah
    name.append("@gmail.com"); //appends the string  ******* output:Rahim ah@gmail.com
    name.insert(0,"@"); //inserts the string   ************* output:@Rahim ah
    name.replace(0,5,"@"); //replaces the string  ******* output:@ah
   
    std::cout << name << '\n';
  */

  
  std::cout << name.at(3) << '\n'; //returns the character at index 3 ********************* output:i
  std::cout << name.find(" a") << '\n'; //returns the index of the first occurance of the string ******* output:5
  std::cout << name.find_last_of(" a") << '\n'; //returns the index of the last occurance of the string ******* output:6
   
  return 0;
}
