#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char content[1000];

    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        printf("Error opening file1.txt for writing.\n");
        return 1;
    }

    printf("Enter a sentence to write to the file: ");
    fgets(content, sizeof(content), stdin);
    fputs(content, file1);
    fclose(file1);

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt for reading.\n");
        return 1;
    }

    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("Error opening file2.txt for writing.\n");
        fclose(file1);
        return 1;
    }

    while (fgets(content, sizeof(content), file1) != NULL) {
        fputs(content, file2);
    }

    fclose(file1);
    fclose(file2);

    printf("Sentence successfully copied from file1.txt to file2.txt.\n");

    return 0;
}
