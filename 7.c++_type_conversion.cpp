#include <iostream>

int main() {

  int x=10;                //implicit conversion
  double y= (int)20.2323;   //explicit conversion

  char z=100;            //implicit conversion
  int a= 'd';            //implicit conversion(for char to another '..')   

                            //Example
  int correct=8;
  int questions= 15;
  double score= (double)correct/questions* 100; //explicit conversion


  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << z << '\n';
  std::cout << a << '\n';
                           //direct conversion
  std::cout << char (101)<< '\n';

  std::cout << "Score: "<< score << "%\n";



  return 0;
}
