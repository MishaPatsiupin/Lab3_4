#ifndef LAB3_STING_H
#define LAB3_STING_H
#include "name.h"
#include <iostream>
#include <vector>
#include "product.h"
#include "director.h"
#include "administrator.h"
#include "developer.h"
#include "manager.h"


extern int id_chet;

class product;
class administrator;
class developer;
class manager;

int ID_inzilizete();
int get_number(int min);
int get_choize(int min, int max);
int whot_you_wont (int i);
int menu();

void change_name (name &obj);

void chacge_product (std::vector<product> &products);
void change_product_developer(product &obj);
void change_product_manager(product &obj);
void add_product_primitives(product &obj);
void remove_product_element(std::vector<product>& obj, size_t index);

void view_administrator(std::vector<administrator> &administrators);

void view_developer(std::vector<developer> &developers);

void view_manager(std::vector<manager> managers);


#endif //LAB3_STING_H
