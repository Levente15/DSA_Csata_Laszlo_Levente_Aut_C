#include <stdio.h>
#include "function.h"
int main() {
    Matrix * matrix;

    readMatrix("inpt.txt",&matrix);
    find_elemet(matrix,100);
    modulus_elemet(matrix);
    int sum = number_sum(matrix);

    double scattering = scattering_matrix(matrix);

    printf("Sum: %i\n", sum);
    printf("Scattering: %lf", scattering);
    return 0;
}
