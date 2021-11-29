#include <stdio.h>
 
int main() {
  int i;
  float v[100], x;
  for (i = 0; i < 100; i++) {
    scanf("%f", &v[i]);
  }
  for (i = 0; i < 100; i++) {
    if (v[i] <= 10) {
      printf("A[%d] = %.1f\n", i, v[i]);
    }
  }
  return 0;
}