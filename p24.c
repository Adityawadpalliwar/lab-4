#include <stdio.h>

void fillSpiral(int n) {
    int spiral[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        
        for (int i = left; i <= right; i++) {
            spiral[top][i] = value++;
        }
        top++;

      
        for (int i = top; i <= bottom; i++) {
            spiral[i][right] = value++;
        }
        right--;

        
        for (int i = right; i >= left; i--) {
            spiral[bottom][i] = value++;
        }
        bottom--;

        
        for (int i = bottom; i >= top; i--) {
            spiral[i][left] = value++;
        }
        left++;
    }

 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", spiral[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    if (n > 0) {
        fillSpiral(n);
    } else {
        printf("Matrix size must be greater than 0\n");
    }

    return 0;
}
