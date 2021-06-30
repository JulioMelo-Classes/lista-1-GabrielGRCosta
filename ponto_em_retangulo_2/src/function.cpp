#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect ( const Ponto &R1, const Ponto &R2, const Ponto &P ){ 
  if(P.x > R1.x && P.x < R2.x && P.y > R1.y && P.y < R2.y){
    return INSIDE;
  }  
  else if(( P.x >= R1.x && P.x <= R2.x) && (P.y >= R1.y && P.y <= R2.y )){
    return BORDER;
  }
  else if(P.x < R1.x || P.x > R2.x || P.y < R1.y || P.y > R2.y){
    return OUTSIDE;
  }
  else{ //esse retorno não tem muito sentido... um ponto sempre é válido em relação a um retangulo, o que poderia ser inválido são os pontos do próprio retangulo
    return INVALID;
  }  
}
