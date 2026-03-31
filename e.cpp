#include <iostream>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;
  if ((A - B) % 10 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
