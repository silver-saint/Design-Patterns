#include "ModernSingleton.hpp"

int main() {
    auto& function = ModernSingleton::getInstance();
    function.log();
    function.printLogCount();
    return 0;
}
