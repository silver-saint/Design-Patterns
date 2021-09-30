//
// Created by neyko on 9/10/2021.
// Latest update by Madman10K 30/9/2021
//
#include "ModernSingleton.hpp"

void ModernSingleton::printLogCount()  {
    std::cout << this->logs.size() << " times Logs\n";
}

void ModernSingleton::log() {
    for(auto i = 0; i < 50; i++) {
        this->logs.push_back(message);
    }
    std::cout << "Special Logger: " << message << "\n";
}