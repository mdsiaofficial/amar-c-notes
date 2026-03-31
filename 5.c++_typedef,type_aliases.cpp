#include <iostream>
#include <vector>

typedef std::string text_t;
typedef int num;

/*OR, (using keywords)
  using text_t= std::string;
  using num= int;
*/
int main() {

  text_t first = "Rahim ";
  num x = 333;

  std::cout << first << '\n' << x << '\n';

  return 0;
}
