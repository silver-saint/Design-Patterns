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
    // The copy constructor is not needed for a singleton since there should only be 1 instance
    S(S const&) = delete;
    // The operator= is also not needed for the same reason as the copy constructor
    void operator=(S const&) = delete;

    void log();
    void printLogCount();

    static ModernSingleton& getInstance() {
        // Rather than doing a heap allocation we instantiate a static member variable.
        // This means that we do not need to handle with heap memory making the program safer and faster
        static ModernSingleton instance;
        return instance;
    }
private:
    std::vector<std::string> logs;
    std::string message = "Hi there";
};
#endif //SIOCP_SINGLETON_H