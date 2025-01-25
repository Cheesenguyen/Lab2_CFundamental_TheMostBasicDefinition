#include <stdio.h>

int main() {
    int a = 4;
    float b = 3.14;
    char c = 97; // ASCII code của ký tự 'a'
    unsigned short d = 128;
    char str[] = "Hello World!";

    printf("%d\n", a);           // In số nguyên
    printf("%.4f\n", b);         // In số thực với 4 chữ số thập phân
    printf("%c\n", c);           // In ký tự
    printf("%hu\n", d);          // In số nguyên không dấu dạng unsigned short
    printf("%s\n", str);         // In chuỗi ký tự

    return 0;
}
