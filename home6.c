#include <stdio.h>

int main() {

    FILE *file;

    char fileName[100];

    printf("Enter the file name: ");
    scanf("%s", fileName);

    file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Error opening the file. Make sure the file exists and the name is correct.\n");
    } else {
        printf("File opened successfully.\n");


        fclose(file);
    }

}
