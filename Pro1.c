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

void Acceptinput() {
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

void display_output() {
    for (int i = 0; i < SIZE; i++) {  
        printf("Product ID: %d\n", p1[i].productID);
        printf("Name: %s\n", p1[i].name);
        printf("Price: %.2f\n", p1[i].price);  
        printf("Quantity: %d\n", p1[i].quantity);
    }
}

int main() {
    Acceptinput();
    display_output();
    return 0;
}