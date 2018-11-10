#include <iostream>
#include "matriz.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Matriz Y;
	Matriz X(3,1), A(3,3), C(3,3);
	Matriz W = C;
	Matriz Z(A);
	int numeroLinhas = A.get_rows(); 
	int numeroColunas = A.get_cols(); 
	Y.unit();                                     // inicializa Y com a matriz identidade 
	A(2,1)=10;                               // altera o valor de uma posi��o de A 
	Y.zeros();                                // modifica todos os elementos de Y para o valor zero 
	C=A+A;                                  // Soma 
	C-=A;                                     // Subtra��o  
	A=C-A;                                  // Subtra��o 
	A+=A;                                   // Soma 
	A=~C;                                  // A � igual a transposta de C 
	X.ones();                             // modifica todos os elementos de X com 1s
	X*=2;                                   // multiplica��o por uma constante 
	//C=A*X;                                         // multiplica��o de matrizes 
	C*=X;                                            // multiplica��o de matrizes 
	if (A == C)                                 // verifica a igualdade entre A e C 
	if(X != Y)                                  // verifica a desigualdade entre A e C 
	cout << C << endl;                        // Impress�o de matrizes 
	cin >> Y;                                     // leitura de dados para dentro da matriz Y 

	return 0;
}
