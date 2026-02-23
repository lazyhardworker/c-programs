#include <stdio.h>

void displayMatrix(int r, int c, int Ar[r][c]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", Ar[i][j]);
        }
        printf("\n");
    }
}
void transpose(int rowSize, int colSize, int A[rowSize][colSize], int B[colSize][rowSize]){
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            B[j][i] = A[i][j];
        }
    }
}
int main(){
int m = 2, n = 3;
int A[m][n], B[n][m];
transpose(m,n,A,B);
displayMatrix(n,m,B);
return 0;

}