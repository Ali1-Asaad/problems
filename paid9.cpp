// write a program to read a number then print all digit frequency in that number //

#include <iostream>
using namespace std;

void readnum(int &num) {
  cout << "please enter number " << endl;
  cin >> num;
}

int find_frequency(int num, int i) {
  int j = 0;
  while(num > 0) {
    int reaminder = 0;
    reaminder = num % 10;
    num = num / 10;
    if (reaminder == i) {
      j = j + 1;
    }
  }
  return j;
}

void print_allnumfrequency(int num) {
  for (int i=0 ; i<10 ; i++) {
    int digit_frequency;
    digit_frequency = find_frequency(num,i);
    if (digit_frequency > 0) {
      cout << "digit " << i << " frequency is " << digit_frequency << endl;
    }
  }
}

int main() {
  int num;
  readnum(num);
  print_allnumfrequency(num);

  return 0;
}
