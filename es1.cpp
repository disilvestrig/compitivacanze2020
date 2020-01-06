#include <iostream>
using namespace std;

void somma (int n1,int n2){
	cout << n1+n2;
}

int main(){
	int n1,n2;
	cout << "Inserisci i 2 addendi :\n";
	cin >> n1;
	cout << "\n";
	cin >> n2 ;
	cout << "\nsomma : ";
	somma(n1,n2);
}
