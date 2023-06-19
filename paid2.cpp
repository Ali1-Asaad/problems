/*  write a programm to print all prime number from 1 to N  */

#include <iostream>
#include <string>
using namespace std;

enum ennumtype {prime = 1 , notprime = 2};

void readinfo(int &num) {
  do {
    cout << "please enter positive number " << endl;
    cin >> num;
  }while (num < 0);
}

ennumtype check(int iterate) {
  int flag = 0;
  for (int i=2 ; i<iterate ; i++) {
    if (iterate % i == 0) {
      flag = 1 ;
    }
  }
  if (flag == 0) {
    return ennumtype::prime;
  }
}

void print_prime_num(int num) {
    cout << "1" << endl;
    cout << "2" << endl;
  for (int i=3 ; i<=num ; i++) {
    if (check(i) == ennumtype::prime) {
      cout << i << endl;
    }
  }
}

int main() {
  int num;
  readinfo(num);
  print_prime_num(num);

  return 0;
}
