#include <iostream>
#include "Singleton.hpp"

Singleton*  Singleton::instance = NULL;

int main() {
    Singleton* function = Singleton::getInstance();
    function->log();
    function->printLogCount();
    return 0;
}
