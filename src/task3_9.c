#include <stdio.h>

int main() {
    char name[31];
    char field[151];
    char field_code[6], generation[4];
    int id, class_number;
    char dob[11];
    float gpa;

    fgets(name, sizeof(name), stdin); 
    scanf("%d", &id); 
    scanf("%s", dob); 
    getchar();  
    fgets(field, sizeof(field), stdin); 

    scanf("%s", field_code);  
    scanf("%d", &class_number);  
    scanf("%s", generation);  
    scanf("%f", &gpa);  

    // In kết quả theo định dạng yêu cầu
    printf("Name: %s", name);
    printf("ID: %d\n", id);

    printf("Date of birth: %.2s/%.2s/%.4s\n", dob, dob + 3, dob + 6);

    printf("Field: %s", field);
    printf("Class: %s-%02d - %s\n", field_code, class_number, generation);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
