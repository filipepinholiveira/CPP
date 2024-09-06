#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() 
{
    Base* obj = generate();
    identify(obj);
    //if (obj != NULL)
        identify(*obj);

    // Testando com um ponteiro nulo
    Base* notObj = NULL;
    identify(notObj);

    /* Pontos Importantes
    Verificação do Ponteiro Nulo: No exemplo, a função identify(Base* p) verifica se p é nulo antes de fazer 
    qualquer outra operação. Isso evita que o código tente acessar memória inválida.

    Identificação com Referência: A função identify(Base& p) é chamada apenas se o ponteiro não for nulo, 
    garantindo que não haverá tentativa de desreferenciar um ponteiro nulo.

    ATENCAO
    Desreferenciar um ponteiro nulo é um erro grave que pode levar a falhas de segmentação e comportamento 
    indefinido. Sempre certifique-se de que o ponteiro é válido e não nulo antes de realizar qualquer operação com ele.
*/
    //if (notObj != NULL)
        identify(*notObj);
     
    delete obj;  // Liberar a memória alocada, se obj não for nulo
    return 0;
}
