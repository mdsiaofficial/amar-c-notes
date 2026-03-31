#include <iostream>
#include <ctime>    // for time
#include <cstdlib>  // for rand and srand

int main()
{
  int num;
  int guess;
  int tries=0;

  using namespace std;

  srand(time(0));
  num = rand() % 100 + 1; // rand() range is (o-32767)  //Generate a random number between 1 and 100

  cout << "************ NUMBER GUESSING GAME**************\n";
  do {
     cout << "Guess the number between 1 to 100: ";
     cin >> guess;
     tries++;
    
     if (guess>num) {
           cout << "Too high!!\n";
       }

     else if (guess<num) {
           cout << "Too low!!\n";
       }
     
     else {

        cout <<"**********************************************\n";

         cout << "Correct!! The number is: " << num << "\n" << "Total number of tries: " << tries << '\n';

       }

  } while(num!=guess);


  return 0;
}
