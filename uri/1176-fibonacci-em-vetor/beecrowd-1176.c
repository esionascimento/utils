#include <stdio.h>

int main() {
  int i, j, q, count;
  long long int n[64];
  scanf("%d",&q);
  for (i = 0; i < q; i++) {
    n[0] = 0;
    n[1] = 1;
    scanf("%d",&count);
    if (count == 0) {
      printf("Fib(%d) = %lld\n", count, n[0]);
    } else if (count == 1) {
      printf("Fib(%d) = %lld\n", count, n[1]);
    } else {
      for (j = 2; j <= count; j++) {
        n[j] = n[j-1]+n[j-2];
      }
      printf("Fib(%d) = %lld\n", count, n[count]);
    }
  }
  return 0;
}