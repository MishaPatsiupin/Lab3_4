/*использовать наследование
ID экземпляра.
Предусмотреть автоматическое и корректное заполнение полей класса
данными.

-Сотрудник, читать
-Тестировщик, примечания
-Менеджер,  создание, участвует
-Разработчик, создание, участвует
-Администратор, изменение статуса производства, ставить задачи на выполнение
-Директор добавление предыдущих классов

Добавить также список с информацией о производимых/произведенных товарах. Внутри должна храниться
информация о разработчике и менеджере. Добавить возможность изменять статус товара (в
разработке, производится, есть на складе, нет в наличии) администраторам. Также добавить
возможность ставить задачи на выполнение (по истечению времени задача считается
выполненной и соответственно, изменяется статус).*/

#include "worker.h"
#include "tester.h"
#include "manager.h"
#include "developer.h"
#include "administrator.h"
#include "director.h"

#include "product.h"
#include "task_time.h"
#include "name.h"

#include "sting.h"

#include <iostream>
#include <vector>


int main() {


    std::vector<product> product_vec;
    product_vec.emplace_back();
    product_vec[0] = product_vec[0].first_product();
    std::vector<task_time> task_time_vec;

    std::vector<administrator> administrator_vec;
    administrator_vec.emplace_back();
    administrator_vec[0] = administrator_vec[0].first_administrator();

    std::vector<developer> developer_vec;
    developer_vec.emplace_back();
    developer_vec[0] = developer_vec[0].first_developer();

    std::vector<manager> manager_vec;
    manager_vec.emplace_back();
    manager_vec[0] = manager_vec[0].first_manager();

    std::vector<tester> tester_vec;



    director director_one;
    director_one = director_one.first();

    std::cout << director_one;
    int choize_menu = -1, flag = 0;
    while (true) {
        choize_menu = menu();

        switch (choize_menu) {
            case 0: {
                return 0;
                break;
            }
            case 1: {//director
                std::cout << director_one;
                switch (whot_you_wont(2)) {
                    case 0: {
                        change_name(director_one);
                        break;
                    }
                    case 1: {
                        chacge_product(product_vec);
                        break;
                    }
                    case 2: {
                        view_administrator(administrator_vec);
                        break;
                    }
                    case 3: {//view developer's
                        view_developer(developer_vec);
                        break;
                    }
                    case 4: {//view manager's
                        view_manager(manager_vec);
                        break;
                    }
                    case 5: {//view tester's

                        break;
                    }
                    case 6: {//back

                        break;
                    }
                }


                break;
            }
        }


    }


    manager_vec.emplace_back();
    manager_vec.emplace_back();
    manager_vec[0].name_name = {'M', 'a', 'n', 'a', 'g', 'e', 'r', ' ', '1'};
    manager_vec[1].name_name = {'M', 'a', 'n', 'a', 'g', 'e', 'r', ' ', '2'};


    std::cout << product_vec[0];


    std::cout << "Okey.";


    getchar();
    getchar();
    return 0;
}
