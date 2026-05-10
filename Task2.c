#include <stdio.h>
void addMatrix(int a[10][10], int b[10][10], int r, int c) {
    int sum[10][10];
    printf("\nMatrix Addition:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrix(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int result[10][10];
    printf("\nMatrix Multiplication:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
void transposeMatrix(int a[10][10], int r, int c) {
    printf("\nTranspose Matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main() {
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if(r1 == r2 && c1 == c2) {
        addMatrix(a, b, r1, c1);
    } else {
        printf("\nAddition not possible.\n");
    }

    if(c1 == r2) {
        multiplyMatrix(a, b, r1, c1, c2);
    } else {
        printf("\nMultiplication not possible.\n");
    }

    transposeMatrix(a, r1, c1);

    return 0;
}
