#include <stdio.h>
#define MAX 50
#define SIZE 3

struct Product {
    int productID;
    char name[100];
    float price;
    int quantity;
};

struct Product p1[SIZE];

void Acceptall() {
    for (int i = 0; i < SIZE; i++) {  
        printf("Enter details of product %d\n", i + 1);
        printf("Enter Product_id: ");
        scanf("%d", &p1[i].productID); 
        printf("Enter name: ");
        scanf("%s", p1[i].name);  
        printf("Enter Price: ");
        scanf("%f", &p1[i].price); 
        printf("Enter quantity: ");
        scanf("%d", &p1[i].quantity);  
    }
}

void Showall() {
    for (int i = 0; i < SIZE; i++) {  
        printf("Product ID: %d\n", p1[i].productID);
        printf("Name: %s\n", p1[i].name);
        printf("Price: %.2f\n", p1[i].price);  
        printf("Quantity: %d\n", p1[i].quantity);
    }
}

void show(int index) {
    printf("\nProduct Details\n");
    printf("Product ID: %d\n", p1[index].productID);
    printf("Name: %s\n", p1[index].name);
    printf("Price: %.2f\n", p1[index].price);
    printf("Quantity: %d\n", p1[index].quantity);
}

void update(int index) {
    printf("\nUpdate Existing Product %d\n", index + 1);
    printf("Enter new productID: ");
    scanf("%d", &p1[index].productID);
    printf("Enter new name: ");
    scanf("%s", p1[index].name);
    printf("Enter new price: ");
    scanf("%f", &p1[index].price);
    printf("Enter new Quantity: ");
    scanf("%d", &p1[index].quantity);
}

int main() {
    int choice;
    while (1) {
        printf("\nProduct information\n");
        printf("=======================================\n");
        printf("1. Add New product\n");
        printf("2. View All product\n");
        printf("3. Update product Information\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: Acceptall(); break;
            case 2: Showall(); break;
            case 3: update(2); break;
            case 4: return 0;
            default: printf("Invalid choice. Try again.\n");
        }

    }


}