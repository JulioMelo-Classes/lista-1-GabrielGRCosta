/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
  Ponto R1,R2,P;
  while(cin >> R1.x >> R1.y >> R2.x >> R2.y >> P.x >> P.y){
    if(pt_in_rect(R1,R2,P)==0){
     cout<<"inside"<<endl;
    }
    else if(pt_in_rect(R1,R2,P)==1){
     cout<<"border"<<endl;
    }
    else if(pt_in_rect(R1,R2,P)==2){
     cout<<"outside"<<endl;
    }
    else{
     cout<<"invalid"<<endl;
    }
  }

    return 0;
}
