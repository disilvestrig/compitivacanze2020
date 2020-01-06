#include <iostream>
using namespace std ;

bool ins(int n1,int n2){
	if (n1 < 0 || n2 < 0){
		return false ;
	}
	else {
		return true ;
} }
long long int calc1(){
	int q;
	long long int mol=1;
	cout <<"\nQuanti numeri vuoi moltiplicare?\n";
	cin >> q;
	for (int i = 1;i <= q;i++){
		mol = mol*i;
	}
	cout <<"\n";
	return mol ;
}
long long int calc2(){
	int base,esponente;
	long long int pot = 1;
	cout <<"\nInserisci base ed esponente\n";
	cin >> base;
	cout << "\n";
	cin >> esponente ;
	for(int i = 1;i <= esponente;i++){
		pot = pot *base;
	}
	cout <<"\n";
	return pot ;
}
double rapp(long long int mol,long long int pot){
	double rap;
	rap = mol/pot;
	cout << "\nrapporto :\n";
	cout << rap;
}
int main(){
	bool value;
	int n1,n2;
	long long int mol,pot;
	cout << "Inserisci 2 valori \n";
	cin >> n1;
	cout << "\n";
	cin >> n2;
	value = ins(n1,n2);
	while (value == false){
	cout << "Inserisci 2 valori \n";
	cin >> n1;
	cout << "\n";
	cin >> n2;
	value = ins(n1,n2);
	}
	mol = calc1();
	pot = calc2();
	rapp(mol,pot);
}
