#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTable(int c, int l) {
  int countL;

  for(countL = 1; countL <= l; countL++) {
      int insideC = 0;

      if (countL == 1 || countL == l) {
        for (insideC = 0; insideC < c; insideC++) {
          printf("*");
        }
        
      } else {
        
        for (insideC = 1; insideC <= c; insideC++) {
          
          if (insideC == 1 || insideC == c) {
            printf("*");
          } else {
            printf(".");
          }

        }
 
      }

    printf("\n");
  }

  printf("\n");
  return;
}

int main(void) {
  int tries;
  int count = 0;
  scanf("%d", &tries);
  
  int lines[100] = { 0 };
  int columns[100] = { 0 };

  while (count < tries) {
    int c, l;

    do {
      scanf("%d", &l); // linhas
    } while (l >= 100);

    do {
      scanf("%d", &c); // colunas
    } while (c >= 100);

    lines[count] = l;
    columns[count] = c;

    count++;
  }

  printf("\n");
  for (count = 0; count < tries; count++) {
    printTable(columns[count], lines[count]);
    
  }
  
  return 0;
}
