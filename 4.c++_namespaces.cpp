#include <iostream>

namespace first{
  int x =2;
}

namespace s{
  int x=3;
}

int main() {

  int x=1;

  std::cout << x << '\n';//x=1

  std::cout << first::x << '\n';//x=2

  std::cout << s::x << '\n';//x=3


/* another options
 *
 #include <iostream>
int main() {
   using namespace first;
   
   std::cout << x << '\n'; //x=2
   
   another,
     using namespace first;
  
     std::cout << s::x << '\n'; //x=3

 } 
*/

  
/*
  #include <iostream>
    int main() {
 
   {  using namespace std;
      string name="  rahim"; //omitted: std::
      int x=7;             
      cout << x << name << '\n'; //omitted: std::
   }
  
   OR,....(better)
   {using std::string;
    using std::cout;
    int x=7;
    string name="rahim"; //omitted: std::
    cout << x << name << '\n'; //omitted: std::

   }
*/


  return 0;
}

