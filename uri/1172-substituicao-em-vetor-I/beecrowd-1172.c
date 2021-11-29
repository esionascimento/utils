#include <stdio.h>
 
int main() {
  int i, x;
  int v[10];
  for (i = 0; i < 10; i++) {
    scanf("%d", &x);
    if (x <= 0) {
      v[i] = 1;
    } else {
      v[i] = x;
    }
  }
  for (i = 0; i < 10; i++) {
    printf("X[%d] = %d\n", i, v[i]);
  }
  return 0;
}