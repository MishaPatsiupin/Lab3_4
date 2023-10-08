#ifndef LAB3_PRODUCT_H
#define LAB3_PRODUCT_H

#include <vector>
#include "sting.h"
#include "task_time.h"

int ID_inzilizete();

class product : public task_time{
public:
    friend std::ostream &operator<<(std::ostream &ostream, const product &product);
    product create_product ();
    ~product() {};

    int ID;
    std::vector<char> name_product;
    int quantity = 0; //0 - нет в наличии, -1 производится, -2 в разработке, >0 в наличии
    std::vector<char> developer;
    std::vector<char> manager;
    std::vector<char> primitives;
};



#endif //LAB3_PRODUCT_H
