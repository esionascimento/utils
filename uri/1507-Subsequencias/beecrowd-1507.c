#include <stdio.h>
#include <string.h>
 
int main() {
  int qtd1, qtd2;
  char text[100000], segText[1000];
  int wi = 0, wj = 0;

  scanf("%d", &qtd1);
  scanf("%s", text);
  while (wi < qtd1) {
    scanf("%d", &qtd2);
    while (wj < qtd2) {
      scanf("%s", segText);

      int tamSegText = strlen(segText);
      int tamText = strlen(text);

      int count = 0, i, j;
      for (i = 0; i < tamSegText && j < tamText;) {
        for (j = 0; j < tamText; j++) {
          if (segText[i] == text[j]) {
            count++;
            i++;
          }
        }
      }
      if (tamSegText == count) {
        printf("Yes\n");
      } else {
        printf("No\n");
      }
      wj++;
    }
    wi++;
  }
  return 0;
}