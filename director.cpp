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
    ostream << "\nDirector, ";
    director.print_name_id();
    return ostream;
}

director director::first(){
    director first;
    first.name_name = {'L', 'U', 'T', 'S', 'I', 'K', ' ', 'Y', 'r', 'i', 'i'};
first.ID = ID_inzilizete();
    return first;
}


















