#include <iostream>
#include <vector>
using namespace std;

/* Funcion de búsqueda dicotomica, 
Precondición: Vector double a buscar, x a buscar, rango inicial de izq a der
Postcondición: return posicion en el vector v del valor encontrado, si no existe devuelve un -1 */
int posicio(double x, const vector<double>& v, int esq, int dre){ /
	int centro;
	while(esq <= dre){
		centro = ((dre - esq) / 2) + esq;
		if(v[centro] == x) return centro;
		else if(x < v[centro]) dre = centro - 1;
		else esq = centro + 1;
	}
	return -1;
}

int main(){
	int n;
	double x;
	while(cin >> n){
		vector<double> a(n); //declaramos vector con n posiciones
		int fin = n - 1;	
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << "inserta n"; 
		cin >> x; //lectura valor a buscar
		int resultado = posicio(x,a,0,fin);
		cout << resultado << endl; //imprime el resultado
}
}
