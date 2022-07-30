#include "calculadoraDeCosto.h"

float CalculadoraDeCosto::CalcularCosto(float kg, int articulo){
   float costoFinal = 0;
   int rango =-1;

//if que define el "rango" en que se encuentra la variable "kg".
   if(kg>=0 && kg<=3){
    rango = 1;
    
    }else if(kg>=4 && kg<=8){
        rango = 2;

        }else if(kg>=9){
            rango = 3;
        }

if(articulo == 1){
//switch que define el costo segun el rango de "kg".
    switch(rango) {
  case 1:
    costoFinal = 0.345;
    break;
  case 2:
    costoFinal = 0.650;
    break;
  case 3:
    costoFinal = 0.800;
    break;

  default:
    costoFinal = 0;
}
    }else if(articulo == 2){
    //switch que define el costo segun el rango de "kg".
        switch(rango) {
    case 1:
        costoFinal = 0.600;
        break;
    case 2:
        costoFinal = 0.450;
        break;
    case 3:
        costoFinal = 0.345;
        break;

    default:
        costoFinal = 0;
    }
        }else if(articulo == 3){
        //switch que define el costo segun el rango de "kg".
            switch(rango) {
        case 1:
            costoFinal = 0.250;
            break;
        case 2:
            costoFinal = 0.250;
            break;
        case 3:
            costoFinal = 0.250;
            break;

        default:
            costoFinal = 0;
        }  

}

return costoFinal;
}
