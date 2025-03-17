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
    Acceptall();
    Showall();

    int index;
    printf("Enter index (0 to 2) to show details: ");
    scanf("%d", &index);

    if (index >= 0 && index < SIZE) {
        show(index);
        update(index);
        Showall();
    } else {
        printf("Invalid index entered.\n");
    }

    return 0;
}

