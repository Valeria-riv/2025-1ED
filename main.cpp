#include "./Tecnico.h"

int main() {

	Carro goku;
	Tecnico vegeta;

	Carro* ptr = &goku;  // ptr, nombre cualquiera -- Puntero


	vegeta.Tanquear(ptr,20);
	
	goku.Informacion();
	
	//	cout << "Sobrante " <<  sobrante2 << endl; 
	AutoServicio maquina;
	
	maquina.ListarPrecios();
	//maquina.Recargar(1000);
    vegeta.Recargar(&maquina, 300000);
    vegeta.Recargar(&maquina, 200000);
    vegeta.Recargar(&maquina, 200000);
    
    goku.Informacion();
    maquina.Tanquear(&goku,0);
    goku.Recorrer(100);
    goku.Informacion();
    cout << maquina.saldo;


    //cout << sizeof(carro); //Tamaño de goku en bytes
    

	return 0;
}


