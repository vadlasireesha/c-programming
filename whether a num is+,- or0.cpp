#include <stdio.h>
int main() {
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num > 0)
 printf("Positve Number\n");
 else if (num < 0)
 printf("Negatve Number\n");
 else
 printf("Zero\n");
 return 0;
}
