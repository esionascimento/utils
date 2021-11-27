#include <stdio.h>
 
int main() {
  int x, y;
  int count = 0;
  int i, j;
  int linha = 0, coluna = 0;

  scanf("%d %d", &x, &y);
  int matriz[x][y];

  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 1; i <= x-1; i++) {
    for (j = 1; j <= y-1; j++) {
      if (matriz[i][j] == 42) {
        if (matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7) {
          if (matriz[i][j-1] == 7 && matriz[i][j+1] == 7) {
            if (matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7) {
              linha = i + 1;
              coluna = j + 1;
              break;
            }
          }
        }
      }
    }
  }
  printf("%d %d\n", linha, coluna);
  return 0;
}