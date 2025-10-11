#include <stdio.h>

int main() {
    printf("This code is about multiplication of two Matrices\n");
    int r1, c1, r2, c2;

    printf("Enter the Number of Rows and Columns of First matrix (r c): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the Number of Rows and Columns of Second matrix (r c): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Wrong combination of Matrices are given\nNOTE: Number of columns of first matrix must be equal to number of rows of second matrix.\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], multi[r1][c2];

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

    // Initialize result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            multi[i][j] = 0;
        }
    }

    // Matrix multiplication
    printf("Product of the two matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                multi[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
