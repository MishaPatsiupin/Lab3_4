#ifndef LAB3_DIRECTOR_H
#define LAB3_DIRECTOR_H

#include <iostream>
#include <vector>
#include "sting.h"
#include "name.h"

int ID_inzilizete();

class director : public name{
public:


    friend std::ostream &operator<<(std::ostream &ostream, const director &director);
    director create_director();
    director first();
    ~director() {};
};


#endif //LAB3_DIRECTOR_H
