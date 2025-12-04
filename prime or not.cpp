#include <stdio.h>
int main() {
 int num, i, fag = 1;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num <= 1) fag = 0;
 else {
 for (i = 2; i <= num / 2; i++) {
 if (num % i == 0) {
 fag = 0;
 break;
 }
 }
 }
 if (fag) printf("Prime Number\n");
 else printf("Not a Prime Number\n");
 return 0;
}
