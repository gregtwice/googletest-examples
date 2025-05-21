#include "singleton.hpp"

#include <iostream>

MySingleton *MySingleton::getInstance(){
    static MySingleton instance{};
    return &instance;
}

bool MySingleton::do_work()
{
    std::cout << "working\n";
    return true;
}
