//Biblioteca padr�o.
#include <iostream>
//Biblioteca padr�o.
using namespace std;
//Programa principal.
int main() {
    //Definindo a vari�vel "num" e junto do valor de "i".
    int num, i = 1;
    
    //Interface interativa com o usu�rio.
    cout << "Digite um n�mero inteiro positivo: ";
    //L� as informa��es da entrada e armazena na vari�vel escolhida.
    cin >> num;
    
    //C�digo de repti��o. Enquanto a condi��o for verdadeira o programa ir� repetir. No exemplo, se Num = 100, ele ir� repetir at� chegar a 100, mas nunca passar.
    while (i <= num){
        //Interface que ir� mostrar todos os n�meros at� que a condi��o se quebre.
        cout << i << " ";
        //Uma das formas de escrever um Contador. Basciamente o "i" vai somar seu valor base at� a atingir o limite da condi��o.(i vale 1, ent�o vai ser 1+1...)
        i++;
    }
    return 0;
}