#include "administrator.h"

administrator administrator::create_administrator() {
    administrator administrator;

    administrator.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name administrator: ";
    while (std::cin.get(input) && input != '\n')
        administrator.name_name.push_back(input);


    return administrator;
}

std::ostream &operator<<(std::ostream &ostream, const administrator &administrator) {
    ostream << "Administrator, ID: " << administrator.ID << "\n";
    ostream << "  Name: ";
    for (char i: administrator.name_name) {
        ostream << i;
    }

    return ostream;
}





























