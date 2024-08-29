#pragma once
#include <iostream>
#include "Data.h"
#include <stdint.h>

class Serializer
{
    private:

        Serializer();

        Serializer (Serializer const &copy);

        Serializer &operator=(Serializer const &source);

        ~Serializer();

    public:

    static uintptr_t serialize(Data* ptr); //deve receber um ponteiro para um objeto Data e retornar o endereço desse ponteiro como um uintptr_t.
    /*
    serialize: Converte um ponteiro em um valor inteiro (uintptr_t), o que pode ser útil para armazenar ou transmitir o endereço do ponteiro.
    */

    static Data* deserialize(uintptr_t raw); //deve receber um uintptr_t e convertê-lo de volta para um ponteiro de Data.
    /*
    deserialize: Converte um valor inteiro (uintptr_t) de volta em um ponteiro, permitindo que você recupere o objeto original a partir do endereço armazenado.
    */

   /*

   Exemplo Prático

    Imaginemos que você tenha um objeto Data e deseja salvar o endereço desse objeto para mais tarde recuperá-lo. 
    Você pode usar essas funções para converter o ponteiro para um valor inteiro que pode ser armazenado ou transmitido, 
    e depois reconvertê-lo em um ponteiro quando precisar acessar o objeto novamente.
    
    Essas funções são úteis em cenários como serialização de dados, manipulação de ponteiros em sistemas complexos 
    e comunicação entre diferentes partes de um sistema que precisam compartilhar endereços de memória.*/
};
