//Biblioteca padr�o.
#include <iostream>
//Usada para evitar escrever "std::".
using namespace std;
int main() {
    //Declara��o da vari�vel.
    int num;
    //Inteface pedindo um n�mero.
    cout << "Digite um n�mero inteiro positivo:"; 
    //Leitor que coleta e armazena os dados na vari�vel.
    cin >> num;
    //Interface que mostrar� uma quantidade de pares relativa com o nosso n�mero.
    cout << "Os primeiros " << num << " s�o pares ";
    //Estrutura de repeti��o for. Ir� repetir at� que a condi��o seja atingida. Devemos criar uma vari�vel qualquer, adicionar a condi��o para repetir e depois o contador que determinar� quando o programa atingiu a condi��o.
    for(int i = 2; i <= num * 2; i+=2){
        //Interface que mostra os n�meros do contador. Aqui ser�o os nossos n�meros pares.
        cout << i << " ";
    }
    return 0;
}