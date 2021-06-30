#include <iostream>
using namespace std;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
  int vet[5];
  int xlr8=0;
  for(int i=0;i<SIZE;i++){
    cin >> vet[i] ;
    if(vet[i]<0){
      xlr8+=1;
    }
  }
  cout << xlr8 << endl;

  return 0;
}
