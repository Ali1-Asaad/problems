/* write a program to check if a nummber is perfect or not
perfect number = sum=(all divisors)
28 = 1 + 2 + 4 + 7 + 14  perfect

12 = 1 + 2 + 3   notperfect
*/

#include <iostream>
using namespace std;

enum enperfeckt {perfect = 1 , notperfect = 2};

void readnum(int &num) {
  do {
    cout << "please enter positive number " << endl;
    cin >> num;
  }while(num < 0);
}

int find_divisors(int num) {
  int sum = 0;
  for (int i=1 ; i<num ; i++) {
    if (num % i ==  0) {
      sum = sum + i;
    }
  }
  return sum;
}

enperfeckt determinenumber(int sum, int num) {
  if (sum == num) {
    return enperfeckt::perfect;
  }
  else {
    return enperfeckt::notperfect;
  }
}

void print(enperfeckt perfect) {
  if (perfect == enperfeckt::perfect) {
    cout << "the number is perfect " << endl;
  }
  else {
    cout << "the number is not perfect " << endl;
  }
}

int main () {
  int num;
  readnum(num);
  print(determinenumber(find_divisors(num),num));
}
