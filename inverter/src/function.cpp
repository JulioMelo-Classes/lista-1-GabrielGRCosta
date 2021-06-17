#include <iostream>
#include <iterator>
using std::swap;
#include <array>
using namespace std;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse ( std::array <std::string, SIZE> &arr )
{
  int tam;
  tam = arr.size();
  int vet[tam];
  if(tam % 2 == 0){
    for(int i=0;i<tam/2;i++){
      if(i==0){
        swap(*(arr.begin()+i), *(arr.end()-1));
      }
      else{ 
        swap(*(arr.begin()+i), *(arr.end()-i-1));
      }  
    }
  }
  else{
    for(int i=0;i<tam/2;i++){
      if(i==0){
        swap(*(arr.begin()+i), *(arr.end()-1));
      }
      else{ 
        swap(*(arr.begin()+i), *(arr.end()-i-1));
      }
    }
  }
  
}
