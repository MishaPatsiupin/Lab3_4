#include "developer.h"

std::ostream &operator<<(std::ostream &ostream, const developer &developer){
    ostream << "Developer, ID: " << developer.ID << "\n";
    ostream << "  Name: ";
    for (char i: developer.name_name) {
        ostream << i;
    }

    return ostream;
}


developer developer::create_developer() {
    developer developer;

    developer.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name developer: ";
    while (std::cin.get(input) && input != '\n')
        developer.name_name.push_back(input);


    return developer;
}




















