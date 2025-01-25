#include <stdio.h>

int main() {
    // File attributes
    unsigned int fileAddress = 4152963; // File address in memory
    char filePath[] = "C:\\User\\Administrator\\Downloads\\file.txt";
    char fileContent[] = "Hello World!";
    char author[] = "Tran Quang Huy";
    char fileSize[] = "4KB";
    char dateCreated[] = "19/03/2024";
    char dateModified[] = "20/03/2024";

    // Printing the report
    printf("========================================\n");
    printf("              FILE REPORT               \n");
    printf("========================================\n");
    printf("File address:       %X\n", fileAddress); // Hexadecimal format
    printf("Path:               %s\n", filePath);
    printf("Content:            \"%s\"\n", fileContent);
    printf("Author:             %s\n", author);
    printf("Size:               %s\n\n", fileSize);
    printf("Metadata:\n");
    printf("Date created:       %s\n", dateCreated);
    printf("Date modified:      %s\n", dateModified);

    return 0;
}
