#ifndef LAB3_TASK_TIME_H
#define LAB3_TASK_TIME_H
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <string>
#include <windows.h>
#include <limits>


class task_time {
public:
    int time;
    std::string task;
int flag_work = 0;

    static std::shared_ptr<task_time> create_task();
    void new_time();
    void countdown();
};




#endif //LAB3_TASK_TIME_H
