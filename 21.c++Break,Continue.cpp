#include <iostream>

int main()
{
                      //Break = Break out of the loop
  std::cout << "********  Break(10)  *********\n";                  
  for(int i=0; i<=15; i++) {
    
    if(i==10){
      break;
    }

    std::cout << i << " ";
  }

                      //Continue = skip current iteration and move to next iteration

  std::cout << "\n ********  Continue(10)  ********* \n";                  
  for (int i=0; i<=15; i++) {

    if(i==10){
      continue;
    }
    
    std::cout << i << ' ' ;   //*********** ('') works only for single space.
  }

  return 0;
}
