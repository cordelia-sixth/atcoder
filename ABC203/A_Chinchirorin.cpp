#include <iostream>
using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  
  if(a == b) {
    cout << c;
  } else if(a == c) {
    cout << b;
  } else if(b == c) {
    cout << a;
  } else {
    cout << 0;
  }
  
  return 0;
}
