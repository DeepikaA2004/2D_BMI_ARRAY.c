#include<stdio.h>

int main() {
    float bmi[10][2];
    int i, j;
    
    for(i = 0; i < 10; i++) {
        printf("Enter height for person %d (in meter): ", i);
        scanf("%f", &bmi[i][0]);
        printf("Enter weight for person %d (in kg): ", i);
        scanf("%f", &bmi[i][1]);
    }
    
    printf("The height weight matrix is:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 2; j++) {
            printf("%f ", bmi[i][j]);
            if(j == 1) {
                printf("\n");
            }
        }
    }
    
    for(i = 0; i < 10; i++) {
        printf("The BMI of person %d is %f \n", i, bmi[i][1] / (bmi[i][0] * bmi[i][0]));
    }
    
    return 0;
}
