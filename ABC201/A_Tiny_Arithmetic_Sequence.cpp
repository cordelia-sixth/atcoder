#include <iostream>
using namespace std;

int main(void) {
  int list[3];
  for(int i = 0; i < 3; i++) {
    cin >> list[i];
  }
  
  sort(list, list + 3);
  if(list[1] - list[0] == list[2] - list[1]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}
