// write a program to read how many keys to generate and print them on the screen //
// for example input 5 //
// output could be //
// GUOE-TSSG-KKPQ-IBKH //
//HBCH-LOQT-DXIE-YXTS //
//QQUY-VASE-JFTM-HNYG //
//RCHV-OOWD-QWKG-GOPW //
//EYOD-RGGV-OEQH-OZCR //

#include <iostream>
using namespace std;
#include <cstdlib>

void readinfo(int &num) {
  cout << "please enter a number " << endl;
  cin >> num ;
}

int randomletter(int from , int to) {
  return (rand() % (to - from + 1) + from);
}

void generatepassword() {
  for (int i=0 ; i<19 ; i++) {
    if (i == 4 || i == 9 || i == 14) {
      cout << "-" ;
      continue;
    }
    cout << char(randomletter(65,90));
  }
  cout << endl;
}

void countingfunc(int num) {
  for (int i=0 ; i<num ; i++) {
    generatepassword();
  }
}

int main() {
  srand((unsigned)time(NULL));
  int num;
  readinfo(num);
  countingfunc(num);

  return 0;
}
