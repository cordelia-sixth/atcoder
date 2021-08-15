#include <iostream>
using namespace std;

int main() {
  int A, B, C, T;
  cin >> A >> B >> C;
  T = A + B + C;
  cout << max({(T - A), (T - B), (T - C)}) << endl;
  
  // int a[3];
  // for(int i = 0; i < 3; i++) cin >> a[i];
  // sort(a, a + 3);
  // cout << a[1] + a[2] << endl;
  
  return 0;
}
