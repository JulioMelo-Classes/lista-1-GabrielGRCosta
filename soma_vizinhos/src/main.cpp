/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <vector>
using namespace std;

/*
ok
*/
int main( void )
{
  int n1,n2,lxt;
  while(cin >> n1 >> n2) {
    lxt = 0;
    if(n2>0){
      for(int i=0;i<n2;i++)
        lxt += n1 + i;
    }
    else if(n2<0){
      for(int i=0;i>n2;i--)
        lxt += n1 + i;
    }
    else{
      lxt += n1;
    }
    cout << lxt << endl;
  }
  return 0;
}
