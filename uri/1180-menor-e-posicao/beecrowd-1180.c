#include <stdio.h>

int main() {
  int count, i, x, menor = 9999, posicao;

  scanf("%d", &count);
  int n[count];
  for(i = 0; i < count; i++) {
    scanf("%d", &x);
    n[i] = x;
    if (x < menor) {
      menor = x;
      posicao = i;
    }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicao);
  return 0;
}