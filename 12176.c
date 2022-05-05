#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTable(int c, int l) {
  int countL;

  for(countL = 1; countL <= l; countL++) {
    int countC = 0;

      while (countC < c) {
        
        if (countL%2!=0) {
          printf("*");

          if (!(countC + 2 > c)) {
            printf(".");
          }
          
        }
      
        if (countL%2==0) {
          printf(".");

          if (!(countC + 2 > c)) {
            printf("*");
          }
        }

        countC = countC + 2;
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


  for (count = 0; count < tries; count++) {
    printTable(columns[count], lines[count]);
    
  }
  
  return 0;
}
