// https://youtu.be/87SH2Cn0s9A?t=2298
#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 10;
    float fps = 24.5;
    double morePrecise = 32.113013;
    char charecter = 'C';
    char name[] = "Python";
    bool isNormal = true;
    
    printf("number: %d", number);
    printf("\nfps: %.2f", fps);
    printf("\nmore precise: %.5lf", morePrecise);
    printf("\ncharecter: %c", charecter);
    printf("\nname: %s", name);
    printf("\nis normal: %d", isNormal);
    return 0;
}