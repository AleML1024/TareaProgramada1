#include "tipoEnvio.h"
float TipoEnvio::servicioPostal(float kg, int clase, float km){
   float costoServicioPostal = 0;
   int rango =-1;

//if que define el "rango" en que se encuentra la variable "kg".
   if(kg>=0 && kg<=3){
    rango = 1;
    
    }else if(kg>=4 && kg<=8){
        rango = 2;

        }else if(kg>=9){
            rango = 3;
        }

if(clase == 1){
//switch que define el costo segun el rango de "kg".
    switch(rango) {
  case 1:
    costoServicioPostal = 0.300*km;
    break;
  case 2:
    costoServicioPostal = 0.450*km;
    break;
  case 3:
    costoServicioPostal = 0.600*km;
    break;

  default:
    costoServicioPostal = 0;
}
    }else if(clase == 2){
    //switch que define el costo segun el rango de "kg".
        switch(rango) {
    case 1:
        costoServicioPostal = 0.0280*km;
        break;
    case 2:
        costoServicioPostal = 0.0530*km;
        break;
    case 3:
        costoServicioPostal = 0.0750*km;
        break;

    default:
        costoServicioPostal = 0;
    }
        }else if(clase == 3){
        //switch que define el costo segun el rango de "kg".
            switch(rango) {
        case 1:
            costoServicioPostal = 0.0120*km;
            break;
        case 2:
            costoServicioPostal = 0.0120*km;
            break;
        case 3:
            costoServicioPostal = 0.0120*km;
            break;

        default:
            costoServicioPostal = 0;
        }  

}
// arregloEnvios[+1] = costoServicioPostal;
// tamanoMatriz +=1;
return costoServicioPostal;
}


float TipoEnvio::fedEx(float distancia, float peso){

float costoFedEx = 35.00;

if(distancia > 500){
    costoFedEx += 15.00;
}

if(peso > 10){
    costoFedEx += 10.00;
}
// arregloEnvios[+1] = costoFedEx;
// tamanoMatriz +=1;
return costoFedEx;
}