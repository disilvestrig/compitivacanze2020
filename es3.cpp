using namespace std ;
#include <iostream>

void fattoriale(int n1){
	long long int fat = 1;
	for (int i = 1;i <= n1;i++){
		fat = fat *i;
	}
	cout << "!"<<n1<<" : "<< fat <<"\n";
}
void potenza(int n1,int n2){
	long long int pot = 1;
	for (int i = 0;i <n2;i++){
		pot = pot * n1;
	}
	cout << pot ;
}
int main(){
	int loop = 0,choice,n1,base,esponente;
	while (loop == 0){
		cout << "Cosa vuoi fare? \n1. fattoriale\n2. potenza\n3. Ferma il programma\n";
		cin >> choice;
		cout <<"\n";
		switch (choice){
			case 1:
				cout << "\nInserisci numero di cui vuoi il fattoriale\n";
				cin >> n1;
				cout << "\n";
				fattoriale(n1);
				break ;
			case 2:
				cout << "\nInserisci base ed esponente\n";
				cin >> base;
				cout << "\n";
				cin >> esponente;
				cout << "\n";
				potenza (base,esponente);
				break ;
			case 3:
				loop = 1;
				break ;
		}
		
	}
}
