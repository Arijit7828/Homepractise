#include <stdio.h>
struct Friend {
    char name[50]; // Assume a maximum name length of 49 characters
};

int main() {

    struct Friend bestFriends[5];

    for (int i = 0; i < 5; ++i) {
        printf("Enter the name of best friend #%d: ", i + 1);
        scanf("%s", bestFriends[i].name);
    }

    printf("\nNames of 5 Best Friends:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Friend #%d: %s\n", i + 1, bestFriends[i].name);
    }

}
