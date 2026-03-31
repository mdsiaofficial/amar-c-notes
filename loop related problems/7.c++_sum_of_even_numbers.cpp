#include <iostream>

int main() {
  int i, e, sum = 0, j;

  using std::cin;
  using std::cout;

  cout << "Enter start number: ";
  cin >> j;

  cout << "Enter end number:";
  cin >> e;

  for (i = j; i <= e; i++) {

    if (i % 2 == 0) {

      sum += i;
    };
  }
  cout << "total:" << sum << '\n';

  return 0;
}
