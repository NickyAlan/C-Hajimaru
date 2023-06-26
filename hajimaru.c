// https://youtu.be/87SH2Cn0s9A?t=3649
#include <stdio.h>
#include <stdbool.h> // bool
#include <string.h> // strlen
#include <math.h> 

int main() {
    int number = 10;
    float fps = 24.5;
    double morePrecise = 32.113013;
    char charecter = 'C';
    char string[] = "Python";
    bool isNormal = true;

    printf("number: %d", number);
    printf("\nfps: %.2f", fps);
    printf("\nmore precise: %.5lf", morePrecise);
    printf("\ncharecter: %c", charecter);
    printf("\nstring: %s", string);
    printf("\nis normal: %d", isNormal);
    
    float item1 = 5.15;
    float item2 = 10.42;
    
    printf("\nitem 1: %6.2f", item1);
    printf("\nitem 2: %6.2f", item2);

    const float PI = 3.14159;
    printf("\nPI: %.4f", PI);

    char name[25]; // max size 25 bytes
    int age;
    printf("\nWhat's your name? \n: ");
    // scanf("%s", &name); input not include white space
    fgets(name, 25, stdin); // alway add \n at the end
    name[strlen(name) - 1] = '\0'; // remove \n

    printf("How old are you? \n: ");
    scanf("%d", &age);
    printf("Hello, How are you? %s. You're %d years old.", name, age);
    
    double a = sqrt(10);
    double b = pow(5, 2);
    int c = round(3.14);
    printf("\n%d", c);

    return 0;
}