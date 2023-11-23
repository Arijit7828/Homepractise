#include <stdio.h>
#include <unistd.h>

int main() {

    char fileName[100];

    printf("Enter the file name: ");
    scanf("%s", fileName);

    if (access(fileName, F_OK) != -1) {
        printf("File '%s' exists.\n", fileName);
    } else {
        printf("File '%s' does not exist.\n", fileName);
    }

    return 0;
}
