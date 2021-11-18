#include <stdio.h>
 
int main() {
  int count = 0;
  int i, j;
  scanf("%d", &count);
  for (i = 0; i < count; i++) {
    char diamante[1000];
    int menor = 0, maior = 0;
    scanf("%s", diamante);
    for (j = 0; diamante[j] != '\0'; j++) {
      if (diamante[j] == '<') {
        menor++;
      } else if (diamante[j] == '>') {
        maior++;
      }
    }
    if ((menor || maior) == 0) {
      printf("0\n");
    } else if (maior <= menor) {
      printf("%d\n", maior);
    } else {
      printf("%d\n", menor);
    }
  }
  return 0;
};