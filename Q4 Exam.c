#include <stdio.h>

int main() {
    int r,c;
    int i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int array[r][c];

    printf("Enter the elements of the array:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Boundary elements of the array:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                printf("%d ", array[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

}
