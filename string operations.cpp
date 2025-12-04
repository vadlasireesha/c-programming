#include <stdio.h>
int main() {
char str1[50], str2[50];
printf("Enter frst string: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter second string: ");
fgets(str2,sizeof(str2),stdin);
// Calculate length of str1
int len1=0;
while(str1[len1]!='\0') len1++;
printf("Length of frst string = %d\n", len1-1);
// Compare str1 and str2
int i=0, fag=0;
while(str1[i]!='\0' && str2[i]!='\0'){
if(str1[i]!=str2[i]) {fag=1; break;}
i++;
if(fag) printf("Strings are not equal\n");
else printf("Strings are equal\n");
return 0;
}
}
