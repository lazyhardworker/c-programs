#include <stdio.h>
int main(){
    int a[100][100],p,q,m,n;
    printf("Enter th number of rows and columns: ");
    scanf("%d %d", &m, &n);
    for(p=0; p<m; p++){
        for(q=0; q<n; q++){
            printf("Enter element a[%d][%d]: ", p, q);
            scanf("%d", &a[p][q]);
        }
    }
    for(p=0; p<m; p++){
        printf("\n");
        for(q=0; q<n; q++){
            printf("%d ", a[p][q]);
        }
    }
}