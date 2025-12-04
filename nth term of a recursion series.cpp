#include <stdio.h>
int term(int n){
if(n==1) return 1;
return term(n-1) + 2;
int main()
{
int n;
printf("Enter n: ");
scanf("%d", &n);
printf("Nth term = %d", term(n));
return 0;
}
