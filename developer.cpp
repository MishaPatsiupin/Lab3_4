#include "developer.h"

std::ostream &operator<<(std::ostream &ostream, const developer &developer) {
    ostream << "  Developer, ID: " << developer.ID << "\n";
    ostream << "  Name: ";
    for (char i: developer.name_name) {
        ostream << i;
    }
ostream << std::endl;
    return ostream;
}


developer developer::create_developer() {
    developer developer;

    developer.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name developer: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (std::cin.get(input) && input != '\n')
        developer.name_name.push_back(input);


    return developer;
}

developer developer::first_developer() {
    developer developer;

    developer.ID = ID_inzilizete();
    developer.name_name = {'G', 'l', 'e', 'c', 'e', 'v', 'i', 'c', 'h', ' ', 'I', '.', 'I', '.'};
    return developer;
}



















