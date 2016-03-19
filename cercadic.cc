#include <iostream>
#include <vector>
using namespace std;
int posicio(double x, const vector<double>& v, int esq, int dre){
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
		vector<double> a(n);
		int fin = n - 1;	
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << "inserta n";
		cin >> x;
		int resultado = posicio(x,a,0,fin);
		cout << resultado << endl;
}
}
