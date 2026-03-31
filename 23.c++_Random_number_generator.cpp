#include <cstdlib> // for rand and srand
#include <ctime>   // for time
#include <iostream>

int main() {
  using namespace std;

  srand(time(NULL)); // seed the random number generator , you can also use
                     // srand(time(0));

  int num1 = (rand() % 6) + 1; // rand() range is (o-32767)  //Generate a random
                               // number between 1 and 6; 6 sided dice

  int num2 = rand() % 10 +
             1; // Generate a random number between 1 and 10; 10 sided dice

  int num3 = rand() % 20 +
             1; // Generate a random number between 1 and 20; 20 sided dice

  cout << "Result of 6 sided dice: " << num1 << '\n';
  cout << "Result of 10 sided dice: " << num2 << '\n';
  cout << "Result of 20 sided dice: " << num3 << '\n';

  return 0;
}
