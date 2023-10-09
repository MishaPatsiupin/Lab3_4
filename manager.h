#ifndef LAB3_MANAGER_H
#define LAB3_MANAGER_H
#include <iostream>
#include <vector>
#include "sting.h"
#include "name.h"

int ID_inzilizete();

class manager : public name{
public:


    friend std::ostream &operator<<(std::ostream &ostream, const manager &manager);
    ~manager() {};

    manager create_manager();
    manager first_manager();

};














#endif //LAB3_MANAGER_H
