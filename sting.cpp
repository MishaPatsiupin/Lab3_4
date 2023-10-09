#include "sting.h"
#include "manager.h"
#include "administrator.h"


int id_chet = 0;

int get_choize(int min, int max) {
    int choize = -1;

    while (choize == -1) {
        std::cout << "Enter the number from " << min << " to " << max << ": ";
        std::cin >> choize;

        if (std::cin.fail() || choize < min || choize > max) {
            std::cin.clear();
            std::cout << "Error input. Please try again." << std::endl;
            choize = -1;
        } else {
            return choize;
        }
    }
}

int get_number(int min) {
    int number = -1;

    while (number == -1) {
        std::cin >> number;

        if (std::cin.fail() || number < min) {
            std::cin.clear();
            std::cout << "Error input. Please try again." << std::endl;
            number = -1;
        } else {
            return number;
        }
    }
}

int whot_you_wont(int i) {
    int flag = -1;

    switch (i) {
        case 1: {
            std::cout << "\nEnter 0, back" << std::endl;
            std::cout << "Enter 1, to changes data obj" << std::endl;
            std::cout << "Enter 2, to delete odj" << std::endl;
            std::cout << "Enter 3, to add new odj" << std::endl;
            flag = get_choize(0, 3);
            break;
        }
        case 2: {
            std::cout << "\nEnter 0, to changes director's information" << std::endl;
            std::cout << "Enter 1, to view product" << std::endl;
            std::cout << "Enter 2, to view administrator's" << std::endl;
            std::cout << "Enter 3, to view developer's" << std::endl;
            std::cout << "Enter 4, to view manager's" << std::endl;
            std::cout << "Enter 5, to view tester's" << std::endl;
            std::cout << "Enter 6, back" << std::endl;
            flag = get_choize(0, 6);
            break;
        }
        case 3: {
            std::cout << "\nEnter number the element ->" << std::endl;
            flag = get_number(1) - 1;
            break;
        }
        case 4: {
            std::cout << "\nEnter the -2, if product in development" << std::endl;
            std::cout << "Enter the -1, if product is in production" << std::endl;
            std::cout << "Enter the 0, if product  out of Stock" << std::endl;
            std::cout << "Enter the product quantity" << std::endl;
            flag = get_number(-2);
            break;
        }
    }
    return flag;
}

void change_name(name &obj) {
    std::cin.ignore();
    char input;
    obj.name_name.clear();
    std::cout << "Enter the new name: ";
    while (std::cin.get(input) && input != '\n') {
        obj.name_name.push_back(input);
    }
    // std::cout << "Ok. New information:\n" << obj;
}

void view_administrator(std::vector<administrator> &administrators){
    while (true){
        for (size_t i = 0; i < administrators.size(); i++) {
            std::cout << "\n(" << i + 1 << ") administrators:" << administrators[i] << std::endl;
        }

        int temp_choize = whot_you_wont(1);
        if (temp_choize == 0) {
            return;
        }

        int temp_element;
        if (temp_choize != 3) {
            temp_element = whot_you_wont(3);
        }

if (temp_choize == 1){
    change_name(administrators[temp_element]);
}
if (temp_choize == 2){
    if (temp_element < administrators.size()) {
        administrators.erase(administrators.begin() + temp_element);
    }

}
if (temp_choize == 3){
    administrator new_admin;
    new_admin = new_admin.create_administrator();
    administrators.push_back(new_admin);
}
    }
}





void chacge_product(std::vector<product> &products) {
    while (true) {
        for (size_t i = 0; i < products.size(); i++) {
            std::cout << "\n(" << i + 1 << ") products:" << products[i] << std::endl;
        }

        int temp_choize = whot_you_wont(1);
        if (temp_choize == 0) {
            return;
        }

        int temp_element;
        if (temp_choize != 3) {
            temp_element = whot_you_wont(3);
        }
        if (temp_choize == 1) {
            std::cout << "Which field do you want to change? or enter the 5 for change primitives\n";
            switch (get_choize(1, 5)) {
                case 1: {
                    change_name(products[temp_element]);
                    break;
                }
                case 2: {
                    products[temp_element].quantity = whot_you_wont(4);
                    break;
                }
                case 3: {
                    change_product_developer(products[temp_element]);
                    break;
                }
                case 4: {
                    change_product_manager(products[temp_element]);
                    break;
                }
                case 5: {
                    add_product_primitives(products[temp_element]);
                    break;
                }
            }
        }
        if (temp_choize == 2) {
            remove_product_element(products, temp_element);
        }
        if (temp_choize == 3) {
            product new_product;
            new_product = new_product.create_product();
            products.push_back(new_product);
        }
    }
}
void remove_product_element(std::vector<product> &obj, size_t index) {
    if (index < obj.size()) {
        obj.erase(obj.begin() + index);
    }
}
void change_product_developer(product &obj) {
    std::cin.ignore();
    char input;
    obj.developer.clear();
    std::cout << "Enter the new developer: ";
    while (std::cin.get(input) && input != '\n') {
        obj.developer.push_back(input);
    }
    std::cout << "Ok. New information:\n" << obj;
}
void change_product_manager(product &obj) {
    std::cin.ignore();
    char input;
    obj.manager.clear();
    std::cout << "Enter the new manager: ";
    while (std::cin.get(input) && input != '\n') {
        obj.manager.push_back(input);
    }
    std::cout << "Ok. New information:\n" << obj;
}
void add_product_primitives(product &obj) {
    std::cin.ignore();
    char input;
    obj.primitives.clear();
    std::cout << "Enter the new primitives: ";
    while (std::cin.get(input) && input != '\n') {
        obj.primitives.push_back(input);
    }
    std::cout << "Ok. New information:\n" << obj;
}

void view_developer(std::vector<developer> &developers){
    while (true){
        for (size_t i = 0; i < developers.size(); i++) {
            std::cout << "\n(" << i + 1 << ")" << developers[i] << std::endl;
        }

        int temp_choize = whot_you_wont(1);
        if (temp_choize == 0) {
            return;
        }
        int temp_element;
        if (temp_choize != 3) {
            temp_element = whot_you_wont(3);
        }

        if (temp_choize == 1){
            change_name(developers[temp_element]);
        }
        if (temp_choize == 2){
            if (temp_element < developers.size()) {
                developers.erase(developers.begin() + temp_element);
            }

        }
        if (temp_choize == 3){
            developer new_developer;
            new_developer = new_developer.create_developer();
            developers.push_back(new_developer);
        }
    }
}

void view_manager(std::vector<manager> managers){
    while (true){
        for (size_t i = 0; i < managers.size(); i++) {
            std::cout << "\n(" << i + 1 << ")" << managers[i] << std::endl;
        }

        int temp_choize = whot_you_wont(1);
        if (temp_choize == 0) {
            return;
        }

        int temp_element;
        if (temp_choize != 3) {
            temp_element = whot_you_wont(3);
        }

        if (temp_choize == 1){
            change_name(managers[temp_element]);
        }
        if (temp_choize == 2){
            if (temp_element < managers.size()) {
                managers.erase(managers.begin() + temp_element);
            }

        }
        if (temp_choize == 3){
            manager new_manager;
            new_manager = new_manager.create_manager();
            managers.push_back(new_manager);
        }

    }
}

int ID_inzilizete() {
    id_chet++;
    return id_chet;
}

int menu() {
    int choize = -1;
    std::cout << "\n----------MENU--------" << std::endl;
    std::cout << "Enter 1, to go to director" << std::endl;

    std::cout << "Enter 2, to view the matrix(s)" << std::endl;
    std::cout << "Enter 3, to view or minimize an arbitrary matrix element" << std::endl; //+строка, толбец
    std::cout << "Enter 4, for transposing a matrix" << std::endl;

/*Перегрузить операторы +, -, *, +=, -=, *=, =, операторы сравнения, new и delete.*/
    std::cout << "Enter 5, for addition of matrices +" << std::endl;
    std::cout << "Enter 6, for subtraction of matrices -" << std::endl;
    std::cout << "Enter 7, for increase by N(-10<=N<=10) each element of the matrix +=" << std::endl;
    std::cout << "Enter 8, for decrease by N(-10<=N<=10) each element of the matrix -=" << std::endl;
    std::cout << "Enter 9, for multiplying a matrix by a number *=" << std::endl;
    std::cout << "Enter 10, for Matrix comparisons on the first element </>" << std::endl;

    std::cout << "Enter 0, for exit program\n" << std::endl;
    choize = get_choize(0, 10);
    return choize;
}

director change_directir() {

}