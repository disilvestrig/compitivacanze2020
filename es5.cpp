#include <iostream>
using namespace std ;

void check(int n2,int n1){
	if (n2 % n1 == 0){
		cout << n2 << " è multiplo di "<< n1 <<"\n";
	}
	else {
		cout << n2 << "non è multiplo di "<< n1 <<"\n";
	}
}
int main(){
	int n2,n1;
	cout << "Inserisci i due numeri da analizzare \n";
	cin >> n1;
	cout << "\n";
	cin >> n2;
	cout << "\n";
	check(n2,n1) ;
}
