#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("example.txt", "w"); // open file in write mode

    if (fp == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    printf("Enter text to write to file:\n");
    fgets(text, 100, stdin); // read input from user

    fprintf(fp, "%s", text); // write data to file

    fclose(fp); // close file

    printf("\nContents of file:\n");

    fp = fopen("example.txt", "r"); // open file in read mode

    if (fp == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    while (fgets(text, 100, fp) != NULL) { // read and print data from file
        printf("%s", text);
    }

    fclose(fp); // close file

    return 0;
}
