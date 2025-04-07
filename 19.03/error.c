#include <stdio.h>
int main() {
    int ROWS, COLS;
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    printf("ROWS: ");
    scanf("%d", &ROWS);
    printf("COLS: ");
    scanf("%d", &COLS);
    for (int i=0; i<ROWS; i++){
        for (int j=0; j<COLS; j++){
            printf("Element at [%d][%d] in a: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0; i<ROWS; i++){
        for (int j=0; j<COLS; j++){
            printf("Element at [%d][%d] in b: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    int c[ROWS][COLS];
    for (int i=0; i<ROWS; i++){
        for (int j=0; j<COLS; j++){
            c[i][i] = a[i][i] + b[i][j];
        }
    }
    for (int i=0; i<ROWS; i++){
        for (int j=0; j<COLS; j++){
            printf("c[%d][%d]\n", i, j);
        }
    }
    return 0;
}
