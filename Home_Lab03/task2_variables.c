#include <stdio.h>

int main()
{
    int rollNo = 1045;
    float marks = 85.5;
    double cgpa = 3.75;
    char grade = 'A';
    _Bool passed = 1;

    printf("Roll No: %d | Marks: %.1f | CGPA: %.2lf | Grade: %c | Passed: %d\n",
           rollNo, marks, cgpa, grade, passed);

    return 0;
}
