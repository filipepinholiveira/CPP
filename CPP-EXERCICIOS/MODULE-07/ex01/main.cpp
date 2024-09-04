#include "iter.hpp"



/////////////////// TESTER MICHEL /////////////////////

int main() 
{
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];
  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );
  return 0;
}


/////////////////// MEU TESTER ///////////////////////////


// int main()
// {
//     const char * Teste = "Filipe";
//     iter(Teste, strlen(Teste), printChar);

//     return 0;
// }