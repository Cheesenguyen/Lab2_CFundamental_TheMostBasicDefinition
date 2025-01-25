#include <stdio.h>
int main() {
    char name[31], id[9], class_code[10], generation[4];
    float gpa;
    scanf("%30[^,],%8[^,],%9[^,],%3[^,],%f", name, id, class_code, generation, &gpa);
    printf("%s\n%s\n%s\n%s\n%.2f\n", name, id, class_code, generation, gpa);
    return 0;
}