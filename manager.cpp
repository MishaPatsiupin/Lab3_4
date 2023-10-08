#include "manager.h"

manager manager::create_manager() {
    manager manager;

    manager.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name manager: ";
    while (std::cin.get(input) && input != '\n')
        manager.name_name.push_back(input);


    return manager;
}

std::ostream &operator<<(std::ostream &ostream, const manager &manager) {
    ostream << "Manager, ID: " << manager.ID << "\n";
    ostream << "  Name: ";
    for (char i: manager.name_name) {
        ostream << i;
    }

    return ostream;
}



