#include <iostream>
#include <exception>

class MinhaExcecao : public std::exception {
public:
    const char* what() const throw() {
        return "MinhaExcecao ocorreu";
    }
};

int main() {
    try {
        throw MinhaExcecao();
    } catch (const std::exception& e) {
        std::cout << "Exceção capturada: " << e.what() << std::endl;
    }
    return 0;
}