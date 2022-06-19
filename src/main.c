#include <calculator.h>
#include <stdio.h>

int main(int argc, char** argv) {
    double a = 1;
    double b = 2;

    operation op = MULT;

    result_t s = compute(4, 3, op);

    if (!s.error) {
        printf("Operation result: %0.3f\n", s.value);
    } else {
        printf("Error on operation\n");
    }
}