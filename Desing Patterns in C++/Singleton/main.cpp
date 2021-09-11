#include "Singleton.hpp"

Singleton*  Singleton::instance = nullptr;

int main() {
    Singleton* function = Singleton::getInstance();
    function->log();
    function->printLogCount();
    return 0;
}
