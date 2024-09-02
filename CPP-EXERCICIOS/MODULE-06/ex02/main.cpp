#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
    Base* obj = generate();
    identify(obj);
    identify(*obj);

    // Testando com um ponteiro nulo
    Base* notObj = NULL;
    identify(notObj);
    identify(*notObj);

    delete obj;  // Liberar a memória alocada, se obj não for nulo
    return 0;
}
