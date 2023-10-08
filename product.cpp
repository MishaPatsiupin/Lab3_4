#include "product.h"

std::ostream &operator<<(std::ostream &ostream, const product &product) {
    ostream << "Product, ID: " << product.ID << "\n";
    ostream << "  Name: ";
    for (char i: product.name_product) {
        ostream << i;
    }
    if(product.quantity == -2){
        ostream << "\n  Product in development";
    }
    if(product.quantity == -1){
        ostream << "\n  The product is in production";
    }
    if(product.quantity == 0){
        ostream << "\n  Out of Stock";
    }
    if(product.quantity > 0){
        ostream << "\n  In stock, there are only a few "<< product.quantity <<" left";
    }

    ostream << "\n  Developer: ";
    for (char i: product.developer) {
        ostream << i;
    }

    ostream << "\n  Manager: ";
    for (char i: product.manager) {
        ostream << i;
    }

    if (!product.primitives.empty()){
        ostream << "\n  Primitives: ";
        for (char i: product.primitives) {
            ostream << i;
        }
    }
    return ostream;
}

product product::create_product() {
    product product;
    product.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name_product product: ";
    while (std::cin.get(input) && input != '\n')
        product.name_product.push_back(input);

    std::cout << "Enter quantity product: ";
    std::cin >> product.quantity;

    //выводим список разрабов, и просим выбрать нужного
    product.developer = {'0'};

    //выводим список менеджеров, и просим выбрать нужного
    product.manager = {'0'};

    std::cout << "Enter 1, to add primitives ->";
    if(get_number(-10) == 1){
        std::cout << "\nEnter the name_product product: ";
        while (std::cin.get(input) && input != '\n')
            product.primitives.push_back(input);
    }


    return product;
}
