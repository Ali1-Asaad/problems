// write a program to reverse an number //
// fpr example 1234 will be printed as 4321 //

#include <iostream>
using namespace std;

void readnum(int &num) {
  cout << "please enter number " << endl;
  cin >> num;
}

int reverse_digit_of_num(int num) {
  int number2 = 0, reaminder = 0;
  while(num > 0) {
    reaminder = num % 10;
    num = num / 10;
    number2 = number2 * 10 + reaminder;
  }
  return number2;
}

void print(int number2) {
  cout << number2 << endl;
}

int main() {
  int num;
  readnum(num);
  print(reverse_digit_of_num(num));
  return 0;
}
