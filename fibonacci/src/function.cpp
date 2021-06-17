#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
  int p1=0,p2=1,p=0;
  int vet[n];
  if(n==1){
    return std::vector<unsigned int>{};
  }
  else if(n==2){
    return {1,1};
  }
  for(int i=0;i<n;i++){
    p = p1 + p2;
    if(i>0){
      p2=p;
    }
    p1 = p2;
    vet[i] = p1;
    if(i==1){
      vet[i+1] = p2+1;
    }
    vet[i+1] = p2;  
  }
    return std::vector<unsigned int>{};
}
