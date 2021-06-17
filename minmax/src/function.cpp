#include "function.h"
#include <cstddef>
using std::size_t;


std::pair<int,int> min_max( int V[], size_t n )
{
    int tam,menor=0,maior=0,f1=0,lu=0;
    tam = n;
    if(tam == 0){
      return {-1,-1};
    }
    for(int i=0;i<tam;i++){
      if(V[i] < menor || i== 0){
        menor = V[i];
        f1 = i;
      }
      if(V[i] >= maior || i==0){
        maior = V[i];
        lu = i;
      }

    }
    return { f1, lu };
}
