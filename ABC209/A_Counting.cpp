#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << max(0, (b - a + 1)) << endl;
  
  // int a[3];
  // for(int i = 0; i < 3; i++) cin >> a[i];
  // sort(a, a + 3);
  // cout << a[1] + a[2] << endl;
 
  return 0;
}
