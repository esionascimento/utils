#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isSubString(char um[][50]);

int main() {
  int i;
  char entrada[1000];
  char um[10][50];
  char dois[10][50];
  char tres[10][50];
  char quatro[10][50];
  int tamanho = 0;

  int sair = -1;
  do {
    scanf("%s", entrada);
    if (strcmp(entrada, "-1") == 0) {
      sair = isSubString(um);
    } else if (strcmp(entrada, "-2") == 0) {
      sair = isSubString(dois);
    } else if (strcmp(entrada, "-3") == 0) {
      sair = isSubString(tres);
    } else {
      sair = isSubString(quatro);
    }
    printf("sair: %d\n", sair);
  } while (((strcmp(entrada, "0")) && ((sair != 0)) != 0));

  int tam = atoi(um[0]);
  printf("Tam: %d\n", tam);
  for (i = 0; i < 4; i++) {
    printf("%s ", um[i]);
  }
  
  return 0;
}

int isSubString(char um[][50]) {
  char entrada1[1000];
  int i = 1;
  int tamanho = 0;
  char number[2];
  printf("helo\n");

  while (((strcmp(entrada1, "-1")) && (strcmp(entrada1, "-2")) != 0)) {
    scanf("%s", entrada1);
    strcpy(um[i], entrada1);
    printf("Nome do aluno1: %s\n", um[i]);
    i++;
    tamanho++;
  }
  const char * tam = tamanho;
  strcpy(um[0], tam);
  /* strcmp(um[0], charValue); */
  printf("saindo\n");
  return atoi(entrada1); 
}