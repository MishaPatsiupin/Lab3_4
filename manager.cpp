#include "manager.h"

manager manager::create_manager() {
    manager manager;

    manager.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name manager: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (std::cin.get(input) && input != '\n')
        manager.name_name.push_back(input);


    return manager;
}

manager manager::first_manager() {
    manager manager;
    manager.ID = ID_inzilizete();
        manager.name_name = {'K', 'o', 'v', 'a', 'l', 'c', 'h', 'u', 'k', ' ', 'A', '.', 'M', '.'};
    return manager;
}

std::ostream &operator<<(std::ostream &ostream, const manager &manager) {
    ostream << "\nManager, ";
    manager.print_name_id();
    return ostream;
}



