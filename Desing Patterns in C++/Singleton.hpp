//
// Created by neyko on 9/10/2021.
//
#include <iostream>
#include <string>
#include <vector>
#ifndef SIOCP_SINGLETON_H
#define SIOCP_SINGLETON_H


class Singleton {
    static Singleton* instance;
    std::string message = "gei";


public:
    std::vector<std::string> logs;
    void log() {
        for(auto i = 0; i < 50; i++) {
            this->logs.push_back(message);
        }
        std::cout << "Special Logger: " << message << "\n";
    }
    void printLogCount() const {
        std::cout << this->logs.size() << " times Logs\n";
    }
    static Singleton* getInstance() {
        if(instance == nullptr) {

            instance = new Singleton();
        }
        return instance;
    }

};


#endif //SIOCP_SINGLETON_H
