using namespace std;
#include <iostream>

void somma(int n1,int n2){
	cout << n1,n2;
}
void sottrazione(int n1,int n2){
	cout << n1-n2;
}
void divisione (int n1,int n2){
	cout << n1/n2;
}
void moltiplicazione (int n1,int n2){
	cout << n1*n2;
}
void potenza(int n1,int n2){
	long long int pot = 1;
	for (int i = 0;i <n2;i++){
		pot = pot * n1;
	}
	cout << pot ;
}
int main(){
	int n1,n2,c;
	cout << "Inserisci i 2 numeri da prendere \n";
	cin >> n1;
	cout << "\n";
	cin >> n2;
	cout << "Inserisci operazione da eseguire (1. addizione\n2. sottrazione\n3. divisione\n4. moltiplicazione\n5. potenza\n";
	cin >> c;
	cout << "\n";
	switch(c){
		case 1:
			somma(n1,n2);
			break;
		
		case 2 :
			sottrazione(n1,n2);
			break;
		
		case 3:
			divisione (n1,n2);
			break;
		
		case 4 :
			moltiplicazione(n1,n2);
			break;
		case 5 :
			potenza(n1,n2);
			break;
		}
	}
	
