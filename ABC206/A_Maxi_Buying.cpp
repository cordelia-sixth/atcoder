#include <iostream>

int main() {
  int N, T;
  scanf("%d", &N);
  T = N * 1.08;
  
  if(T < 206) {
    printf("Yay!\n");
  } else if(T > 206) {
    printf(":(\n");
  } else {
    printf("so-so\n");
  }
  
  return 0;
}
