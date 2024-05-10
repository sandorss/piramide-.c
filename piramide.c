/***
@file Archivo impresión de números 
***/

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

/***
@param i, j Filas y columnas
***/
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }
        for (int j = i + 1; j > 0; j--) {
            printf("%2d ", j);
        }
        for (int j = 2; j <= i + 1; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }

    return 0;
}
