#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[215];
    char ch;
    int i = 0;

    while (scanf("%c", &ch) && !isdigit(ch)) {
        str[i++] = ch;  // Lưu ký tự vào chuỗi
    }

    str[i] = '\0';  

    printf("%s\n", str);

    return 0;
}
