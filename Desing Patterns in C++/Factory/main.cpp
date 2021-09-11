#include <iostream>

class Penguin {
public:
    Penguin() {}
    virtual void Type (){}

};

class Tux: public  Penguin {
public:
    Tux() {}
     void Type () {
        std::cout << "Tux" << std::endl;
    }
};

class Linux: public Penguin {
public:
    Linux() {}
     void Type () {
        std::cout << "Linux\n";
    }
};

Penguin* Factory(bool Switch) {
    if(Switch) {
        return new Tux{};
    } else {
        return new Linux{};
    }
}

int main() {
    Factory(0)->Type();
    Factory(1)->Type();
    return 0;
}
