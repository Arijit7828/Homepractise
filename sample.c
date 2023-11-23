#include <stdio.h>

// Define a structure to represent a product
struct Product {
    int productId;
    char name[50];
    float price;
};

int main() {
    // Declare an array of Product to store multiple products
    struct Product products[100]; // Assuming a maximum of 100 products

    int numProducts;

    // Get the number of products from the user
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);

    // Input details for each product
    for (int i = 0; i < numProducts; ++i) {
        printf("\nEnter details for Product %d:\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &products[i].productId);

        printf("Name: ");
        scanf("%s", products[i].name); // Assuming the name is a single word without spaces

        printf("Price: ");
        scanf("%f", &products[i].price);
    }

    // Display the details of each product
    printf("\nProduct Details:\n");
    for (int i = 0; i < numProducts; ++i) {
        printf("\nProduct %d:\n", i + 1);
        printf("Product ID: %d\n", products[i].productId);
        printf("Name: %s\n", products[i].name);
        printf("Price: %.2f\n", products[i].price);
    }

    return 0;
}
