#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2;
    char content[1000];

    file1 = fopen("file1.txt", "w");
    if (file1 == NULL)
    {
        printf("cannot open file1\n");
    }

    printf("Enter a content to write to the file: ");
    fgets(content, sizeof(content), stdin);
    fputs(content, file1);
    fclose(file1);

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL)
    {
        printf("cannot open file1\n");
    }

    file2 = fopen("file2.txt", "w");
    if (file2 == NULL)
    {
        printf("cannot open file2\n");
        fclose(file1);
        return 1;
    }

    while (fgets(content, sizeof(content), file1) != NULL)
    {
        fputs(content, file2);
    }

    fclose(file1);
    fclose(file2);

    printf("content successfully copied from file1 to file2.\n");

    return 0;
}
