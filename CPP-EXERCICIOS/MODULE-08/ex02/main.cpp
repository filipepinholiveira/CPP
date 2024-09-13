#include "MutantStack.hpp"
#include <list>

int main()
{

    std::cout << "Teste com STD::STACK" << std::endl;


    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    
    std::cout << "Teste com STD::LIST" << std::endl;

    
    std::list<int> mylist;
    
    
    mylist.push_back(5);
    mylist.push_back(17);
    
    
    std::cout << mylist.back() << std::endl; // Similar ao top() de MutantStack
    
    
    mylist.pop_back();
    std::cout << mylist.size() << std::endl;
    
    mylist.push_back(3);
    mylist.push_back(5);
    mylist.push_back(737);
    mylist.push_back(0);
    
    std::list<int>::iterator itl = mylist.begin();
    std::list<int>::iterator itle = mylist.end();
    
    ++itl;
    --itl;
    
    while (itl != itle) {
        std::cout << *itl << std::endl;
        ++itl;
    }
    
    // Copiar a lista para uma std::stack para verificar a compatibilidade
    std::stack<int, std::list<int> > p(mylist);
    
    return 0;
}
    
    
    
    
    
    
    
    