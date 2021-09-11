//
// Created by neyko on 9/10/2021.
//

#include "Singleton.hpp"


void Singleton::printLogCount()  {
    std::cout << this->logs.size() << " times Logs\n";
}

void Singleton::log() {
    for(auto i = 0; i < 50; i++) {
        this->logs.push_back(message);
    }
    std::cout << "Special Logger: " << message << "\n";
}