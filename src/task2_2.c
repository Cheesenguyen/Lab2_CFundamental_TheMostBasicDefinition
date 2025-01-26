#include <stdio.h>

int main() {
    // Define file attributes
    unsigned int fileAddress = 4152963;
    char filePath[] = "C:\\User\\Administrator\\Downloads\\file.txt";
    char fileContent[] = "Hello World!";
    char author[] = "Tran Quang Huy";
    char fileSize[] = "4KB";
    char dateCreated[] = "19/03/2024";
    char dateModified[] = "20/03/2024";

    // Constants for formatting
    const char *line = "========================================";

    // Print the formatted report
    printf("%s\n", line);
    printf("%26sFILE REPORT\n", ""); // Center align "FILE REPORT"
    printf("%s\n", line);
    printf("%-20s%X\n", "File address:", fileAddress); // Hex format for address
    printf("%-20s%s\n", "Path:", filePath);
    printf("%-20s\"%s\"\n", "Content:", fileContent); // Quoted content
    printf("%-20s%s\n", "Author:", author);
    printf("%-20s%s\n\n", "Size:", fileSize); // Extra newline for metadata

    printf("Metadata:\n");
    printf("%-20s%s\n", "Date created:", dateCreated);
    printf("%-20s%s\n", "Date modified:", dateModified);

    return 0;
}
