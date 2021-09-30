//
// Created by neyko on 9/10/2021.
// Latest update by Madman10K 30/9/2021
//
#ifndef SIOCP_SINGLETON_H
#define SIOCP_SINGLETON_H
#include <iostream>
#include <string>
#include <vector>

class ModernSingleton {
public:
    void log();
    void printLogCount();
    static ModernSingleton& getInstance() {
        static ModernSingleton instance;
        return instance;
    }
private:
    std::vector<std::string> logs;
    std::string message = "Hi there";
};
#endif //SIOCP_SINGLETON_H