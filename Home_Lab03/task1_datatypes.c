#include <stdio.h>

int main()
{
    int age = 20;
    float marks = 85.5;
    double cgpa = 3.75;
    char grade = 'A';
    _Bool pass = 1;

    printf("Age = %d, Size = %zu bytes\n", age, sizeof(age));
    printf("Marks = %.1f, Size = %zu bytes\n", marks, sizeof(marks));
    printf("CGPA = %.2lf, Size = %zu bytes\n", cgpa, sizeof(cgpa));
    printf("Grade = %c, Size = %zu bytes\n", grade, sizeof(grade));
    printf("Pass = %d, Size = %zu bytes\n", pass, sizeof(pass));

    return 0;
}
