#include "name.h"
//#include "sting.h"
int name::next_id = 0;

std::ostream &operator<<(std::ostream &ostream, const name &name) {
    name.print_name_id();
    return ostream;
}

void name::print_name_id() const{
        std::cout << "ID: " << ID << "\n";
        std::cout << "Name: ";
        for (char i : name_name) {
            std::cout << i;
        }
        std::cout << std::endl;
    }

int name::ID_inzilizete() const {
    next_id++;
    int next = next_id;
    int count = 0;
    while (next != 0){
    next = next /=10;
        count++;
    }
    next = 1;
    while (count != 0){
        next *= 10;
        count--;
    }
    return next_id + next;
}



















