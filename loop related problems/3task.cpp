#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int s = arr[0];
  for (int i = 1; i < n; i++) {
    if (s > arr[i]) {
      s = arr[i];
    }
  }
  cout << s << endl;

  return 0;
}
