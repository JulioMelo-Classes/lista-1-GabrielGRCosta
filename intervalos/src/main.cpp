/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

/*
bom, não precisava de vetores, mas blz
*/
int main(void)
{
  int x,b=0,c=0,f=0,e=0,h=0;
  double a;
  double p1,p2,p3,p4,p5;
  vector<int> veve;
  vector<int> vivi;
  
  while( cin >> ws >> x) {
    veve.push_back(x);
  }
  a = veve.size();
  for(int i=0;i<a;i++){
    if(veve[i] >= 0 && veve[i] < 25){
      b+=1;
    }
    else if(veve[i] >= 25 && veve[i] <50){
      c+=1;
    }
    else if(veve[i] >= 50 && veve[i] < 75){
      f+=1;
    }
    else if(veve[i] >= 75 && veve[i] < 100){
      e+=1;
    }
    else{
      h+=1;
    }
  }
  p1 = (b/a)*100;
  p2 = (c/a)*100;
  p3 = (f/a)*100;
  p4 = (e/a)*100;
  p5 = (h/a)*100;

  cout << setprecision(4) <<  p1 << endl;
  cout << setprecision(4) <<  p2 << endl;
  cout << setprecision(4) <<  p3 << endl;
  cout << setprecision(4) <<  p4 << endl;
  cout << setprecision(4) <<  p5 << endl;

 return 0;
}  
//deve-se armazenar os valores dentro do vetor, contar quantos são, verificar em quais intervalos se encaixam e fazer a porcentagem de cada um. dps imprime e cabou