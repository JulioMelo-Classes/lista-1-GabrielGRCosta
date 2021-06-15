#include "function.h"
#include <iostream>
#include <iterator>
using std::swap;
using namespace std;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
  int tam;
  tam = arr.size();
  for(int i=0;i<tam/2;i++){
    std::swap(arr.begin()+i,arr.end()-i);
    cout << arr[i] << endl;
  }
  
}
