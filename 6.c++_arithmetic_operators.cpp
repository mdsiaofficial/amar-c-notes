#include <iostream>


int main() {

  int students= 30, remainder;
                              //addition
  //students= students + 2;
  //students+=2;
  //students++; //means +1

                              //subtraction
  //students= students - 1;
  //students-=1;
  //students--; //means -1

                               //multiplication
  //students=2*students;
  //students*=2;
                               //division
  //students = students / 3;
  //students/=3;

                              //parenthesis-()
  students = (students + 2) / 2;

                              //modulus(works only int data)
  remainder = students % 2;

  std::cout << students << '\n';
  std::cout << remainder << '\n';


  return 0;
}
