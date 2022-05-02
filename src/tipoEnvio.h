#ifndef TIPOENVIO_H
#define TIPOENVIO_H
class TipoEnvio {
   
    public:
     
  int tipoEnvio; // Si tipoEnvio == 0, entonces no se ha especificado el tipo de envio. Si tipoEnvio == 1, entonces el tipo de envio es "envio postal". Si tipo envio == 2, entonces el tipo de envio es FedEx.
  
  float servicioPostal(float kg, int clase, float km);  //Si clase == 0 , entonces no se ha especificado. Si clase == 1 , entonces es primera clase. Si clase == 2, entonces es segunda clase. Si clase == 3, entonces es tercera clase.
  
  float fedEx(float distancia, float peso);
};


#endif