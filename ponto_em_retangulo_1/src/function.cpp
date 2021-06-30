#include "function.h"

/*blz*/
  location_t pt_in_rect ( const Ponto &R1, const Ponto &R2, const Ponto &P ){ 
  if(P.x > R1.x && P.x < R2.x && P.y > R1.y && P.y < R2.y){
    return INSIDE;
  }  
  else if(( P.x >= R1.x && P.x <= R2.x) && (P.y >= R1.y && P.y <= R2.y )){
    return BORDER;
  }
  else{
    return OUTSIDE;
  }  
}



