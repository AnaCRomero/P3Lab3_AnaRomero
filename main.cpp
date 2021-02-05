#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> LetrasUnicas (string cadena){
    vector<char> letraUnica;
    
    for(int i = 0;i<cadena.length();i++){
        if(letraUnica.empty() == true ){
        	//asgina primera letra al vector
            letraUnica.push_back(cadena.at(i));
            
        }else{
        	int contador = 0;
        	
            for(int j = 0; j<letraUnica.size(); j++){
                if(letraUnica[j] == cadena.at(i)){
                	contador++;
                }//valida si repite
            }//recorre el vector 
            
            if(contador <= 0){
                letraUnica.push_back(cadena.at(i));
            }//valida contador
            
        }//fin decision anidada
    }//fin de cadena que reccorre la palabra
    return letraUnica;
}//fin del ejercio 1

vector <int> * contLetra (string cadena, string caracter){
	vector<int> contador;
	int cont = 0;
    
    for(int i = 0;i<caracter.length();i++){
    	char letra = caracter[i];
    	
    	for(int j = 0;j<cadena.length();j++){
    		if (letra == j){
    			cont++;
			}//valida si la letra es lo mismo que la cadena
    	}
    	contador.push_back(cont);
    }
    return contador;
	
}

string ordenarPalabra (string cadena){
	//FALTA SACAR LO DEL EJERCICO 3
	string aux = "";
	for(int i=0;i<cadena.size();i++){
        for(int j=0;j<cadena.size();j++){
            if (cadena[j]>cadena[j+1]){
            	
	            aux[0]=cadena[j];
	            cadena[j]=cadena[j+1];
	            cadena[j+1]=aux[0];
	            
        	}//bubble sort
    	}//recorre cadena al revez 
    }//recorre cadena
    cout << cadena << endl;
}




int main() {
bool continuar = true;
int menu;

	while (continuar){
		cout << "--------MENU-----------" << endl;
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Ejercicio 3" << endl;
		cout << "4. Ejercicio 4" << endl;
		cout << "0. Salir" << endl;
		cout << "------------------------" << endl;
		cout << "Ingrese una opcion: ";
		cin >> menu;
		cout << endl;
		switch (menu){
			case 1:
				{
					string cadena;
					cout << "Ingrese una cadena: ";
					cin >> cadena;
					cout << endl;
					LetrasUnicas(cadena);
					
					for (char caracter : LetrasUnicas(cadena)){
						cout << caracter << " , " ;
					}//imprime el metodo
					
					cout << endl << endl;
					
				}//fin del metodo 1
				break;
			case 2:
				{
					string cadena,caracteres;
					vector <char> letras;
					cout << "Ingrese una cadena: ";
					cin >> cadena;
					cout << "Ingrese los caracteres: ";
					cin >> caracteres;
					
					cout << cadena<< " , " << "[ ";
					
					for(int i=0; i<caracteres.length();i++){
						letras.push_back(caracteres[i]);
						cout << letras[i] << " ";
					}//mete las letras al vector
					cout  << " ] = " ;


					 for (char metodo :  * contLetra(cadena, caracteres)){
						cout << metodo << " , " ;
					}//imprime el metodo
					cout << endl;
					
					
				}//fin del metodo 2
				break;
			case 3:
		
				break;
			case 4:
				{
					string cadena;
					cout << "Ingrese una cadena: ";
					cin >> cadena;
					ordenarPalabra(cadena);
				}
				break;
			case 0:
				{
					cout << "Saliendo...";
					continuar = false;
				}
				break;
			default: cout << "Ingrese una opcion valida!"  << endl;
		}
	}

	
	return 0;
}
