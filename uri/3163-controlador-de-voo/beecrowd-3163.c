#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void isSubString(char um[][50], int *tamanho);

int main() {
  int i;
  char entrada[1000];
  char um[10][50];
  char dois[10][50];
  char tres[10][50];
  char quatro[10][50];
  int tamanho = 0;

  do {
    scanf("%s", entrada);
    if (strcmp(entrada, "-1") == 0) {
      isSubString(um, &tamanho);
    } else if (strcmp(entrada, "-2") == 0) {
      isSubString(dois, &tamanho);
    } else if (strcmp(entrada, "-3") == 0) {
      isSubString(tres, &tamanho);
    } else {
      isSubString(quatro, &tamanho);
    }
  } while ((strcmp(entrada, "0") != 0));


  printf("Tamanho: %d\n", tamanho);
  
  return 0;
}

void isSubString(char um[][50], int *tamanho) {
  char entrada1[1000];
  int i = 0;
  printf("helo\n");

  while (((strcmp(entrada1, "-1")) && (strcmp(entrada1, "-2")) != 0)) {
    scanf("%s", entrada1);
    strcpy(um[i], entrada1);
    printf("Nome do aluno1: %s\n", um[i]);
    i++;
    tamanho++;
  }

  printf("saindo\n");
  /* if (strcmp(entrada1, "0") != 0)
    exit(1); */
}