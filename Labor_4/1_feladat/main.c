#include <stdio.h>
#include "functions.h"
int main() {
    Matrix* matrix;
    readMatrix("input.txt",&matrix);
    printMatrix(matrix);
    return 0;
}
