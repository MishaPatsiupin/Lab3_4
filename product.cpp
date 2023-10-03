#include "product.h"

std::ostream &operator<<(std::ostream &ostream, const product &product) {
    ostream << "Product, ID: " << product.ID << "\n";
    ostream << "  Name: ";
    for (char i: product.name) {
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
