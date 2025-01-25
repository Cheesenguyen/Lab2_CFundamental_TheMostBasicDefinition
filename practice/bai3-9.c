#include <stdio.h>
int main() {
    char name[31], field[151], field_code[6], generation[4];
    int id, class_num;
    char dob[11];
    float gpa;

    scanf("%30[^\n]\n%d\n%10[^\n]\n%150[^\n]\n%5s\n%d\n%3s\n%f", 
          name, &id, dob, field, field_code, &class_num, generation, &gpa);

    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Date of birth: %s\n", dob);
    printf("Field: %s\n", field);
    printf("Class: %s-%02d - %s\n", field_code, class_num, generation);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
