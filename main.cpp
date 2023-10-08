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

    {
        std::vector<product> product_vec;
        std::vector<task_time> task_time_vec;

        std::vector<tester> tester_vec;
        std::vector<manager> manager_vec;
        std::vector<developer> developer_vec;
        std::vector<administrator> administrator_vec;
        std::vector<director> director_vec;
    }

/*
    manager_vec.emplace_back();
    manager_vec.emplace_back();
    manager_vec[0].name_name = {'M', 'a', 'n', 'a', 'g', 'e', 'r', ' ', '1'};
   manager_vec[1].name_name = {'M', 'a', 'n', 'a', 'g', 'e', 'r', ' ', '2'};


    std::cout << product_vec[0];
*/


    std::cout << "Okey.";



    getchar();getchar();
    return 0;
}
