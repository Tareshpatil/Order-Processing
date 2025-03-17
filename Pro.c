#include <stdio.h>

struct Product {
    int productID;
    char name[100];
    float price;
    int quantity;
};

struct Product p1;

void Acceptinput() {
    printf("Enter product_ID: ");
    scanf("%d", &p1.productID);
    printf("Enter Name: ");
    scanf("%s", p1.name);  
    printf("Enter price: ");
    scanf("%f", &p1.price);  
    printf("Enter Quantity: ");
    scanf("%d", &p1.quantity);
}

void display_output() {
    printf("Product_Id: %d\n", p1.productID);
    printf("Name: %s\n", p1.name);
    printf("Price: %.2f\n", p1.price);  
    printf("Quantity: %d\n", p1.quantity);  
}

int main() {
    Acceptinput();
    display_output();
    return 0;
}