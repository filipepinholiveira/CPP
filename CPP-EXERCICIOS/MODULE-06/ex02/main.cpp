#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
    Base* obj = generate();
    identify(obj);

    // Testando com um ponteiro nulo
    Base* notObj = NULL;
    identify(notObj); // Isso pode gerar um comportamento indefinido, pois o ponteiro é nulo

    delete obj;  // Liberar a memória alocada
    return 0;
}