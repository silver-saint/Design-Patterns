//
// Created by neyko on 9/10/2021.
//
#include <iostream>
#include <string>
#include <vector>
#ifndef SIOCP_SINGLETON_H
#define SIOCP_SINGLETON_H


class Singleton {
public:

    void log();
    void printLogCount();
    static Singleton* getInstance() {
        if(instance == nullptr) {

            instance = new Singleton();
        }
        return instance;
    }
private:
    std::vector<std::string> logs;
    static Singleton* instance;
    std::string message = "Hi there";
};


#endif //SIOCP_SINGLETON_H
