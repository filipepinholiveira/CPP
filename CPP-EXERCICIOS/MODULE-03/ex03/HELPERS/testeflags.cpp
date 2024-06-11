#include <iostream>

class Base {
public:
    int value;
    virtual void display() {
        std::cout << "Base value: " << value << std::endl;
    }
};

class Derived : public Base {
public:
    int value; // Isto sombra a variável 'value' na classe base
    void display() {
        std::cout << "Derived value: " << value << std::endl;
    }
};

int main() {
    Derived d;
    d.value = 20; // Está se referindo a 'Derived::value'
    d.Base::value = 10; // Explicitamente se referindo a 'Base::value'
    d.display();

    return 0;
}