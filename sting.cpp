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

int whot_you_wont (int i){
    int flag = -1;

    switch (i) {
        case 0:{
            std::cout << "\nEnter 0, to create new matrix" << std::endl;
            std::cout << "Enter 1, to coppy matrix" << std::endl;
            flag = get_choize(0, 1);
            break;
        }

    }
    return flag;
}


int ID_inzilizete(){
id_chet++;
    return id_chet;
}



