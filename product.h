//
// Created by misha on 30.09.2023.
//

#ifndef LAB3_PRODUCT_H
#define LAB3_PRODUCT_H

#include <vector>
#include <iostream>
#include "task_time.h"

class product : public task_time{
public:
    friend std::ostream &operator<<(std::ostream &ostream, const product &product);

    int ID = 0;
    std::vector<char> name;
    int quantity = 0; //0 - нет в наличии, -1 производится, -2 в разработке, >0 в наличии
    std::vector<char> developer;
    std::vector<char> manager;
    std::vector<char> primitives;
};



#endif //LAB3_PRODUCT_H
