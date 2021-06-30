#include "function.h"
using namespace std;

/*ok*/
vector<unsigned int> fib_below_n( unsigned int n )
{
  int p1=1,p2=1,p=0;
  vector<unsigned int> vet={1,1};
  if(n==1){
    vector<unsigned int>p;
    return p;
  }
  else if(n==2){
    return vet;
  }
  else{ 
    while(p<n){ 
      p = p1 + p2;
      p1 = p2;
      p2=p;
      if(p>=n){
        break;
      }  
      vet.push_back(p);
    }
  }
  return vet;
}
