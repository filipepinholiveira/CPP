
#include <iostream>
#include <list>
#include <stdlib.h>

// esta é uma classe base
class YouTubeChannel 
{
// parte privada de uma classe, as propriedades devem ser privadas e apenas acessadas pelos metodos
private: 
    std::string Name;
    std::string OwenerName;
    int SubscriversCount;

// parte protegida, esta propriedade fica disponivel para as classes derivadas
protected:
    std::string Convidado; 
    int Counter;

// metodos publicos
public:

    YouTubeChannel(std::string name, std::string owenerName, std::string convidado)
    /* isto é o constructor que é na verdade um método, tem q ter o mesmo nome que a classe, e ser void
    e serve para inicializar as propriedades da classe */
    {
        Name = name;
        OwenerName = owenerName;
        Convidado = convidado;
        SubscriversCount = 0;
    }

    void    GetInfo()
    {
        std::cout << "***********************" << std::endl;
        std::cout << "Dono: " << OwenerName << "\n";
        //std::cout << "Origem: " << Country << std::endl;
        std::cout << "Subscritores: " << SubscriversCount << "\n";
        std::cout << "***********************" << std::endl;
    }

    void    Subscricao()
    {
        SubscriversCount++;
    }

    void    TirarSubscricao()
    {
        if (SubscriversCount > 0)
            SubscriversCount--;
    }

    void    Separador()
    {
        
        std::cout << "***********************" << std::endl;
        std::cout << Name << std::endl;
        std::cout << "***********************" << std::endl;
        
    }

    void    CheckAnalitycs ()
    {
        if (Counter < 5)
            std::cout << Name << " é uma rubrica fraca" << std::endl;
        else
            std::cout << Name << " é uma rubrica do caralho" << std::endl;
    }
};




// esta é uma classe derivada da classe base YoutubeChannel
class CookingChannel : public YouTubeChannel
{
    public:
    CookingChannel (std::string name, std::string owenerName, std::string chef) : YouTubeChannel(name, owenerName, chef)
    // construtor criado chamando o construtor da classe base
    {

    }

    void    rubrica() // teste para verificar que usamos variavel protegida da classe base
    {
        std::cout << Convidado << " está a cozinhar para nós!" << std::endl;
        Counter++;
    }
};


class SingingChannel : public YouTubeChannel
{
    public:
    SingingChannel (std::string name, std::string owenerName, std::string cantor) : YouTubeChannel(name, owenerName, cantor)
    // construtor criado chamando o construtor da classe base
    {

    }

    void    rubrica() // teste para verificar que usamos variavel protegida da classe base
    {
        std::cout << Convidado << " está a cantar para nós!" << std::endl;
        Counter++;
    }
};



int main()
{
    
    YouTubeChannel Canal("Super Canal de Cenas", "Filipe Oliveira", "Portugal");
    Canal.Separador();
    Canal.Subscricao();
    Canal.Subscricao();
    Canal.TirarSubscricao();
    Canal.GetInfo();
    CookingChannel Praça("Rubrica de Cozinha", "Produçao", "Hélio Loureiro");
    Praça.Subscricao();
    Praça.Subscricao();
    Praça.Subscricao();
    Praça.Separador();
    Praça.GetInfo();
    Praça.rubrica();
    SingingChannel Musicais("Musicais", "Produção", "Zé Amaro");
    Musicais.Separador();
    Musicais.GetInfo();
    Musicais.rubrica();
    Musicais.rubrica();
    Musicais.rubrica();
    Musicais.rubrica();
    Musicais.rubrica();

    YouTubeChannel *ptr1 = &Praça;
    YouTubeChannel *ptr2 = &Musicais;

    ptr1->CheckAnalitycs();
    ptr2->CheckAnalitycs();
    
}