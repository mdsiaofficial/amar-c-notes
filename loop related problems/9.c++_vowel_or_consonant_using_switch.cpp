#include <iostream>

int main() {

  char ch;
  std::cout << "Enter a character: ";
  std::cin >> ch;

  switch (ch) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    std::cout << ch << " is a vowel.\n";
    break;
  default:
    std::cout << ch << " is a consonant.\n";
    break;
  }

  return 0;
}
