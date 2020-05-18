// Max Base
// https://github.com/BaseMax/FindPasswordC
#include <iostream>
using namespace std;
int main() {
  string password="01";
  string name="Name";
  string p;
  while(true) {
    cout << "Enter system password: ";
    cin >> p;
    if(p == password) {
      cout << "Welcome " << name << endl;
      break;
    }
    else {
      cout << "Error: wrong password!" << endl;
    }
  }
  return 0;
}
