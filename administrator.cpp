#include "administrator.h"

administrator administrator::create_administrator() {
    administrator administrator;

    administrator.ID = ID_inzilizete();
    char input;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "\nEnter the name administrator: ";
    while (std::cin.get(input) && input != '\n')
        administrator.name_name.push_back(input);


    return administrator;
}

administrator administrator::first_administrator(){
    administrator administrator;
    administrator.ID = ID_inzilizete();
    administrator.name_name = {'A', 'd', 'm', 'i', 'n', ' ', '1'};
    return administrator;
}

std::ostream &operator<<(std::ostream &ostream, const administrator &administrator) {
    ostream << "\nAdministrator, ";
    administrator.print_name_id();

    return ostream;
}





























