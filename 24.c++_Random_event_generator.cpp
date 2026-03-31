#include <iostream>
#include <ctime>    // for time
#include <cstdlib>  // for rand and srand

int main()
{
  srand( time(0) );

  int num = rand() % 5 + 1;

  switch (num) {
       using std::cout;

    case 1:cout << "You won a car.\n";
            break;

    case 2:cout << "You won a bike.\n";
            break;

    case 3:cout << "You won a fridge.\n";
            break;

    case 4:cout << "You won a cicycle.\n";
            break;

    case 5:cout << "You won a chocolate.\n";
            break;
     
           //*************In here default is not necessary
     }
  

  return 0;

}
