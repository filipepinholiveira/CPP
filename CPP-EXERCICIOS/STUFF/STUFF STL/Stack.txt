
O std::stack é um adaptador de contêiner fornecido pela biblioteca padrão do C++ que implementa 
 conceito de pilha (stack). Uma pilha é uma estrutura de dados do tipo LIFO (Last In, First Out), 
 onde o último elemento inserido é o primeiro a ser removido.

Características principais do std::stack:
Operações principais:

-> push: Insere um novo elemento no topo da pilha.
-> pop: Remove o elemento do topo da pilha.
-> top: Acessa o elemento no topo da pilha, sem removê-lo.
-> empty: Verifica se a pilha está vazia.
-> size: Retorna o número de elementos na pilha.


Contêiner subjacente: O std::stack é implementado como um adaptador de contêineres. 
Isso significa que ele não é um contêiner por si só, mas utiliza um contêiner subjacente para armazenar os elementos. 
Por padrão, ele usa std::deque, mas você pode especificar outros contêineres como std::vector ou std::list.



Exemplo de uso:
cpp
Copy code
#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    // Inserindo elementos na pilha
    s.push(10);
    s.push(20);
    s.push(30);

    // Acessando o elemento do topo
    std::cout << "Elemento no topo: " << s.top() << std::endl;  // 30

    // Removendo o elemento do topo
    s.pop();

    // Acessando o novo elemento no topo
    std::cout << "Novo elemento no topo: " << s.top() << std::endl;  // 20

    // Verificando o tamanho da pilha
    std::cout << "Tamanho da pilha: " << s.size() << std::endl;  // 2

    // Verificando se a pilha está vazia
    if (s.empty()) {
        std::cout << "A pilha está vazia." << std::endl;
    } else {
        std::cout << "A pilha não está vazia." << std::endl;
    }

    return 0;
}

Saída:
yaml
Copy code
Elemento no topo: 30
Novo elemento no topo: 20
Tamanho da pilha: 2
A pilha não está vazia.


--------------------------------------------------------------

std::dequeResumo:
LIFO: O último elemento a ser inserido é o primeiro a ser removido.
Adaptador: std::stack usa um contêiner subjacente, como std::deque (por padrão).
Operações simples: push, pop, top, empty, size.
Se precisar de mais detalhes ou exemplos específicos, é só avisar!