#include <stdio.h>

// Hàm in ký tự lặp lại
void print_line(char ch, int length) {
    for (int i = 0; i < length; i++) {
        putchar(ch);
    }
    putchar('\n');
}

int main() {
    // In phần tiêu đề với đường kẻ
    print_line('=', 40);
    printf("%25s\n", "FILE REPORT");
    print_line('=', 40);

    // In các thông tin còn lại
    printf("%-20s%s\n", "File address:", "3F5E83");
    printf("%-20s%s\n", "Path:", "C:\\User\\Administrator\\Downloads\\file.txt");
    printf("%-20s\"%s\"\n", "Content:", "Hello World!");
    printf("%-20s%s\n", "Author:", "Tran Quang Huy");
    printf("%-20s%s\n", "Size:", "4KB");

    // Metadata
    printf("\nMetadata:\n");
    printf("%-20s%s\n", "Date created:", "19/03/2024");
    printf("%-20s%s\n", "Date modified:", "20/03/2024");

    return 0;
}
