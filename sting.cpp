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
        case 1:{
            std::cout << "\nEnter 0, to fill data in by default" << std::endl;
            std::cout << "Enter 1, to changes the director's information" << std::endl;
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

int menu(){
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

director change_directir () {

}