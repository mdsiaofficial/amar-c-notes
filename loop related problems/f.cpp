#include <iostream>
using namespace std;
int main() {
  int i;

  cout << "1. Sourav was calculating the volume of a rectangular prism. He was "
          "given 3\n"
          "interegers a , b ,c denoting length,, width and height. Help him to "
          "calculate the\n"
          "volume. [ Volume of rectangular prism = height * width * length "
          "]\n\n\n";

  cout << "2. Maruf loves playing with numbers. He was given an integere "
          "number n. He was\n"
          "cheaking if n was even or odd. But he also found out 0 is not even "
          "nor odd.\n\n\n";

  cout << "3. Farazi just got back from his geometry class. He was given a "
          "homework from\n"
          "his teacher. In his home work there is given 3 side lengths x, y, z "
          "and he has to \n"
          "check if it’s possible to form a triangle by those or not.\n\n\n";

  cout << "4. Sanwar is calculating if he’ll get A, B, C or F in his semester "
          "final exam. He was\n"
          "calculating for 4 subjects in total. He was calculating the avarage "
          "of what he can \n"
          "get. SO If the Avarage is N then…….\n"
          "70 >= N → A\n"
          "70 >= N >= 60 → B\n"
          "60 >= N >= 50 → C\n"
          "60 >= N0 → F\n\n\n";
  cout << "Which questions code you want to run? : ";
  cin >> i;

  switch (i) {

  case 1:
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * b * c << endl;
    break;

  case 2:
    int n;
    cin >> n;
    (n != 0) ? (n % 2 == 0 ? cout << "Even\n" : cout << "Odd\n")
             : cout << "Zero\n";
    break;

  case 3:
    int x, y, z;
    cin >> x >> y >> z;
    (x + y > z && x + z > y && y + z > x) ? cout << "YES\n" : cout << "NO\n";
    break;

  case 4:
    int m1, m2, m3, m4;
    cin >> m1 >> m2 >> m3 >> m4;
    float avg = (float)(m1 + m2 + m3 + m4) / 4;
    if (avg >= 70) {
      cout << avg << "A\n";
    } else if (avg >= 60) {
      cout << avg << "B\n";
    } else if (avg >= 50) {
      cout << avg << "C\n";
    } else if (avg >= 40) {
      cout << avg << "F\n";
    }

    break;

  defalt:
    cout << "Invalid Input";
  }

  return 0;
}
