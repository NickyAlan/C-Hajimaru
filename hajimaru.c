// https://youtu.be/87SH2Cn0s9A?t=8308
#include <stdio.h>
#include <stdbool.h> // bool
#include <string.h> // strlen
#include <math.h> 
#include <ctype.h> // string fn

void foo(char name[], int age) {
    printf("nothing special");
    printf("\nfor real? %s: %d", name, age);
}

double square(double x) {
    return x*x;
}

int find_max(int x, int y) {
    return (x > y) ? x: y; // (condition) ? true: false
}

int main() {
    // int number = 10;
    // float fps = 24.5;
    // double morePrecise = 32.113013;
    // char charecter = 'C';
    // char string[] = "Python";
    // bool isNormal = true;

    // printf("number: %d", number);
    // printf("\nfps: %.2f", fps);
    // printf("\nmore precise: %.5lf", morePrecise);
    // printf("\ncharecter: %c", charecter);
    // printf("\nstring: %s", string);
    // printf("\nis normal: %d", isNormal);
    
    // float item1 = 5.15;
    // float item2 = 10.42;
    
    // printf("\nitem 1: %6.2f", item1);
    // printf("\nitem 2: %6.2f", item2);

    // const float PI = 3.14159;
    // printf("\nPI: %.4f", PI);

    // char name[25]; // max size 25 bytes
    // int age;
    // printf("\nWhat's your name? \n: ");
    // // scanf("%s", &name); input not include white space
    // fgets(name, 25, stdin); // alway add \n at the end
    // name[strlen(name) - 1] = '\0'; // remove \n

    // printf("How old are you? \n: ");
    // scanf("%d", &age);
    // printf("Hello, How are you? %s. You're %d years old.", name, age);
    
    // double a = sqrt(10);
    // double b = pow(5, 2);
    // int c = round(3.14);
    // printf("\n%d", c);


    //pythagoras
    // double A;
    // double B;
    // double C;
    
    // printf("Enter side A : ");
    // scanf("%lf", &A);
    
    // printf("Enter side B : ");
    // scanf("%lf", &B);
    
    // C = sqrt(A*A + B*B);
    // printf("Side C = %.3lf", C);

    // int age = -1;
    // bool is_adult = false;
    // if (age >= 18) {
    //     is_adult = true;
    // }
    // else if (age < 0) {
    //     printf("what wrong with your age ?\n");
    // }
    // else {
    //     is_adult = false;
    // }

    // printf("age: %d, is_adult: %d", age, is_adult);

    // char grade = 'A';
    // switch(grade) {
    //     case 'A' :
    //         printf("perfect!");
    //         break;
    //     case 'B' :
    //         printf("nice!");
    //         break;
    //     case 'F' :
    //         printf("why!");
    //         break;
    //     default :
    //         printf("%c is not valid", grade);
    // }

    // char unit;
    // float temp;

    // printf("\nIs the temperature in (F) or (C) ? : ");
    // scanf("%c", &unit);
    // unit = toupper(unit);

    // if (unit == 'C') {
    //     printf("celcius");
    // }
    // else if (unit == 'F') {
    //     printf("fahrenheit");
    // }
    // else {
    //     printf("%c not valid for unit", unit); 
    // }

    // char name[] = "bob";
    // int age = 20;
    // foo(name, age);

    // double number = square(31);
    // printf("\n%.3lf", number);

    // int max_number = find_max(10, 12);
    // printf("\n%d", max_number);

    // char string1[] = "bob";
    // char string2[] = "code";

    // strupr(string1); // strlwr
    // int string_len = strlen(string1);
    // printf("%s %d", string1, string_len);

    // bool is_equal = string1 == string2;
    // printf_s("\n%d", is_equal);

    // for(int i=0; i<5; i++) {
    //     if (i%2 == 0) {
    //         printf("event - ");
    //     }
    //     else {
    //         printf("odd - ");
    //     }
    //     printf("%d\n", i);
    // }

    // int count = 0;
    // while (true) {
    //     printf("always\n");
    //     count += 1;
    //     if (count >= 5) {
    //         break;
    //     }
    // }

    int matrix[] = {5, 10, 15, 20, 23, 41, 14};
    printf("%d", matrix[2]);

    for (int idx = 0; idx < sizeof(matrix) / sizeof(matrix[0]); idx++) {
        printf_s("%d\n", matrix[idx]);
    }

    return 0;
}