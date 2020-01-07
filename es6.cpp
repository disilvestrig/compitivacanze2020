#include <iostream>

using namespace std;



void filler(int lista[20]){
	for (int i = 0;i<20;i++){
		lista[i] = i ;
	}
}
void pari(int lista[20]){
	cout <<"\nNumeri pari: ";
	for (int i = 0;i<20;i++){
		if (lista[i] % 2 == 0){
			cout << "\n" << lista[i] ;
		}
		
	}
}
void postipari(int lista[20]){
	cout <<"\nNumeri in posti pari: ";
	for (int i = 0;i<20;i++){
		if (i % 2 == 0){
			cout << "\n" << lista[i] ;
		}
		
	}
}
void posneg(int lista[20]){
	cout <<"Aggiungo 1 ai positivi e tolgo 1 ai negativi: ";
	for (int i = 0;i<20;i++){
		if (lista[i] > 0){
			lista[i] ++ ;
			cout << "\n" << lista[i] ;
		}
		else if(lista[i]<0){
			lista[i] -= 1;
			cout << "\n" << lista[i] ;
		}
		
	}
}
void research(int lista[20]){
	int pos;
	cout << "\nInserisci posizione da controllare\n";
	cin >> pos;
	while(pos<0 || pos > 20){
		cout << "\n";
		cin >> pos;
	} 
	cout << "\n";
	cout << lista[pos];
}
void overaverage(int lista[20]){
	float media = 0;
	int counter = 0;
	cout << "Valori sopra la media :\n";
	for(int i = 0;i<20;i++){
		media = media +lista[i];
	}
	media = media / 20;
	for(int i = 0;i<20;i++){
		if (lista[i]>media){
			cout << lista[i];
			cout << "\n";
			counter++ ;
		}
		
	}
	cout << "\nTOTALE : "<<counter;
}
void trade(int lista[20]){
	int box = lista[0];
	lista[0] = lista[19];
	lista[19] = box;
}
void max(int lista[20]){
	int max = 0,indexmax = 0;
	for (int i = 0;i<20;i++){
		if (max < lista[i]){
			max = lista[i];
			indexmax = i;
			
		}
		
	}
	cout << "\nValore max : "<<max <<" ; indice : "<<indexmax;
}
int main(){
	int numeri[20];
	filler(numeri);
	pari(numeri);
	postipari(numeri);
	posneg(numeri);
	research(numeri);
	overaverage(numeri);
	trade(numeri);
	max(numeri);
}
