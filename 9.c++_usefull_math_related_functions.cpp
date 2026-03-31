#include <algorithm>
#include <cmath>
#include <iostream>

// check cplusplus.com/reference/cmath for more functions
int main() {

  double a = 4.46;
  double b = 2;
  double c, d, e, f, g, h, i, j;

  c = std::max(a, b); // without cmath header file, use header <algorithm>
  d = std::min(a, b); // without cmath header file, use header <algorithm>

  e = pow(a, b);
  f = sqrt(81);
  g = abs(-9);

  h = round(a);
  i = floor(a);
  j = ceil(a);

  using std::cout; // namespace MyNamespace
  cout << c << " = max\n";
  cout << d << " = min\n";
  cout << e << " = pow\n";
  cout << f << " = squrt\n";
  cout << g << " = abs\n";
  cout << h << " = round\n";
  cout << i << " = floor\n";
  cout << j << " = ceil\n";

  return 0;
}
