#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define N 4  // ����ʽ�Ľ��������Ը�����Ҫ�޸�

void printMatrix(double matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}
//Ĭ����Ԫ�з�0����
void toUpperTriangular(double matrix[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double factor = matrix[i][i] / matrix[j][i];
            for (int k = 0; k < N; k++)
            {
                matrix[j][k] -= matrix[i][k]*factor;
            }
        }
    }
}

int main() {
    double matrix[N][N] = {
        {2, 1, -1, -3},
        {-3, -1, 2, 4},
        {-2, 1, 2, -1},
        {1, 1, -1, -1}
    };

    printf("Original matrix:\n");
    printMatrix(matrix);

    toUpperTriangular(matrix);

    printf("\nUpper Triangular matrix:\n");
    printMatrix(matrix);

    return 0;
}
