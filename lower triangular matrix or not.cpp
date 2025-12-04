#include <stdio.h>
int main() {
int n, fag=1;
printf("Enter size of square matrix: ");
scanf("%d",&n);
int A[n][n];
printf("Enter elements of matrix:\n");
for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&A[i][j]);
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(A[i][j]!=0){ fag=0; break; }
}
}
if(fag) printf("Matrix is lower triangular\n");
else printf("Matrix is not lower triangular\n");
return 0;
}
