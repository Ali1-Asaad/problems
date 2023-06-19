/* write a programm to ask the user to enter ATM code
and if the user enter wrog number three times he get suspended */

#include <iostream>
#include <cstdlib>
using namespace std;

string readinfo() {
  string pin ;
  cout << "please enter your pin code " << endl;
  cin >> pin;
  return pin;
}

bool check() {
  string pin;
  int i = 0;
  pin = readinfo();
  do{
    pin = readinfo();
    if(pin == "1234") {
      return 1;
    }
    else {
      system("4F");
      cout << "Wrong pin code " << endl;
      i = i + 1;
    }
    if (i == 3) {
      cout <<"you are bloocked " << endl;
      exit(0);
    }
  }while(pin != "1234");
}

int main() {
  if (check()) {
    system("2F");
    cout << "your balance is : 7500 " << endl;
  }
  return 0;
}
