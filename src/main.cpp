#include "tipoEnvio.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

std::vector<float> vectorMontos;

TipoEnvio primero, segundo, tercero;


vectorMontos.push_back(primero.servicioPostal(5, 3, 10));
vectorMontos.push_back(segundo.fedEx(501, 15));
vectorMontos.push_back(tercero.fedEx(300, 5));

cout<< vectorMontos[0]<<endl;
cout<< vectorMontos[1]<<endl;
cout<< vectorMontos[2]<<endl;



float resultadoMontoTotal = 0;
for(int i = 0; i<vectorMontos.size(); i++){
   
    resultadoMontoTotal += vectorMontos[i];
}
    
    cout<< "El monto final de los envios es de : "<< resultadoMontoTotal<<endl;
}