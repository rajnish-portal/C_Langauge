#include <stdio.h>

int main() {
    printf("This code is about sum of two Matrices\n");
    int r1, c1, r2, c2;

    printf("Enter the Number of Rows and Columns of First matrix (r c): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the Number of Rows and Columns of Second matrix (r c): ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Wrong combination of Matrices are given\nNOTE: Number of rows and columns must be the same for addition.\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], sum[r1][c1];

    printf("Enter the data for First matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
     printf("\n");

    printf("Enter the data for Second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

     printf("\n");

    printf("First Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Summing the matrices
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
