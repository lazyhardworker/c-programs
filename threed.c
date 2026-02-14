#include <stdio.h>
int main(){
    int threeD[2][2][2];
    int count = 0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                threeD[i][j][k] = count++;
            }
        }
    }
    // Display the output in matrix form
    for(int i=0; i<2; i++){
        printf("Slice %d:\n", i);
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                printf("%3d ", threeD[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}