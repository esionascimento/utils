#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int sum = (a + b + c) / 2;
  if((a-b) == 0 || (a-c) == 0 || (b-c) == 0) {
    printf("S\n");
  } else if (a == sum || b == sum || c == sum) {
    printf("S\n");
  } else {
    printf("N\n");
  }
  return 0;
}