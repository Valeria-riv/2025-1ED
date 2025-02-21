#include "./Carro.h" 

void Carro::Informacion(){ 

    cout << "Kilometraje: " << kilometraje << endl; 
    cout << "Nivel de Gasolina : " << nivelGasolina << " litros" << endl; 
} 

Carro::Carro(){ 
    kilometraje = 0; 
    nivelGasolina = 0; 
    estado = '0';
} 

void Carro::Recorrer(float distancia){
    
    float distanciaReal = min(nivelGasolina*autonomia, distancia);
    kilometraje = kilometraje + distanciaReal;
    nivelGasolina = nivelGasolina - (distanciaReal/autonomia);
}

float Carro::Tanquear(float Gasolina){
    
    float faltante = capacidad - nivelGasolina;
    float sobrante1 = Gasolina - faltante;
    
    if(sobrante1 >= 0){
        nivelGasolina = capacidad;
        return sobrante1;
        
    }else{
        nivelGasolina = nivelGasolina + Gasolina;
        return 0;
    }
}
