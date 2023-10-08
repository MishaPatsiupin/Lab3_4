#include "director.h"


director director::create_director() {
    director director;

    director.ID = ID_inzilizete();
    char input;

    std::cout << "\nEnter the name director: ";
    while (std::cin.get(input) && input != '\n')
        director.name_name.push_back(input);


    return director;
}

std::ostream &operator<<(std::ostream &ostream, const director &director) {
    ostream << "Director, ID: " << director.ID << "\n";
    ostream << "  Name: ";
    for (char i: director.name_name) {
        ostream << i;
    }

    return ostream;
}




















