// https://youtu.be/87SH2Cn0s9A?t=11652
#include <stdio.h>
#include <stdbool.h> // bool
#include <string.h> // strlen
#include <math.h> 
#include <ctype.h> // string fn
#include <stdlib.h> // random number
#include <time.h> 

// class: but no medthod
struct Player {
    char name[12];
    int score;
};

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

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

void sort(int array[], int size) {
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
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

    // int matrix[] = {5, 10, 15, 20, 23, 41, 14};
    // printf("%d", matrix[2]);

    // for (int idx = 0; idx < sizeof(matrix) / sizeof(matrix[0]); idx++) {
    //     printf_s("%d\n", matrix[idx]);
    // }

    // int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // int n_rows = sizeof(matrix) / sizeof(matrix[0]);
    // int n_cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    
    // for (int row_idx = 0; row_idx < n_rows; row_idx++) {
    //     for (int col_idx = 0; col_idx < n_cols; col_idx++) {
    //         printf("%d ", matrix[row_idx][col_idx]);
    //     }
    //     printf("\n");
    // }

    // char cars[][10] = {"Tesla", "Nissan", "Bent"};
    // strcpy(cars[0], "Mustang"); // cars[0] = "Mustang"
    // for (int idx=0; idx<sizeof(cars)/sizeof(cars[0]); idx++) {
    //     printf("%s ", cars[idx]);
    // } 

    // swap values
    // char x[10] = "water";
    // char y[10] = "soda";
    // char temp[10];

    // strcpy(temp, x); // temp = x
    // strcpy(x, y);
    // strcpy(y, temp);

    // printf("x: %s\n", x);
    // printf("y: %s", y);

    // int array[] = {9, 1, 8, 2, 7, 5};
    // int size = sizeof(array) / sizeof(array[0]);

    // sort(array, size);
    // for (int idx=0; idx<size; idx++) {
    //     printf("%d ", array[idx]);
    // }

    // struct Player player1;
    // struct Player player2;
    // strcpy(player1.name, "Python");
    // player1.score = 10;
    // strcpy(player2.name, "Rust");
    // player2.score = 8;

    // printf("%s\n", player1.name);
    // printf("%s\n", player2.name);

    // User user1 = {"Python", "1234", 2002};
    // printf("%s\n", user1.name);
    // printf("%d\n", user1.id);

    // enum Day today = Sun;
    // printf("%d", today);

    // srand(time(0)); // reset seed
    // for (int i=0; i<5; i++) {
        // int number1 = (rand() % 6) + 1;
        // printf("%d ", number1);
    // }

    // //write and read file
    // FILE *pF = fopen("test.txt", "w");
    // fprintf(pF, "peter pan");
    // fclose(pF);

    FILE *pF = fopen("test.txt", "r");
    if (pF == NULL) {
        printf("can't open file!");
    }
    else {
        char buffer[255];
        while (fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
        fclose(pF);
    }

    return 0;
}