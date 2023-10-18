#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char name[100];

    char ch;
    int characters, words, lines;

    printf("Enter the name of the file: ");
    scanf("%s", name);

    file = fopen(name, "r");

    if (file == NULL)
    {
        printf("\nFile can't be opened!\n");
        exit(EXIT_FAILURE);
    }

    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("Total no. of characters = %d\n", characters);
    printf("Total no. of words = %d\n", words);
    printf("Total no. of lines = %d\n", lines);

    fclose(file);
    return 0;
}
