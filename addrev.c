#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addrev(int n1, int n2) {
  char fchar[10000] = "";
  char schar[10000] = "";

  sprintf(fchar, "%d", n1);
  sprintf(schar, "%d", n2);

  size_t size1 = strlen(fchar);
  size_t size2 = strlen(schar);

  for(int i = 0; i < size1 / 2; i++) {
     char tmp = fchar[i];
     fchar[i] = fchar[size1 - i - 1];
     fchar[size1 - i - 1] = tmp;
  }

  for(int i = 0; i < size2 / 2; i++) {
     char tmp = schar[i];
     schar[i] = schar[size2 - i - 1];
     schar[size2 - i - 1] = tmp;
  }

  int sum = atoi(fchar) + atoi(schar);
  char sumChar[10000] = "";
  sprintf(sumChar, "%d", sum); // transforma number em char

  size_t sizeSumChar = strlen(sumChar);

  for(int i = 0; i < sizeSumChar / 2; i++) {
     char tmp = sumChar[i];
     sumChar[i] = sumChar[sizeSumChar - i - 1];
     sumChar[sizeSumChar - i - 1] = tmp;
  }

  printf("%d", atoi(sumChar));
  printf("\n");
  return;
}

int main(void) {
  int tries, countTries = 0;
  scanf("%d", &tries);

  int ns1[10000] = { 0 };
  int ns2[10000] = { 0 };

  while (countTries < tries) {
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    ns1[countTries] = n1;
    ns2[countTries] = n2;

    countTries++;
  };

  printf("\n");
  int c;
  for (c = 0; c < tries; c++) {
    addrev(ns1[c], ns2[c]);
  }
  
  return 0;
}
