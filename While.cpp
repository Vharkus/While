//Biblioteca padrão.
#include <iostream>
//Biblioteca padrão.
using namespace std;
//Programa principal.
int main() {
    //Definindo a variável "num" e junto do valor de "i".
    int num, i = 1;
    
    //Interface interativa com o usuário.
    cout << "Digite um número inteiro positivo: ";
    //Lê as informações da entrada e armazena na variável escolhida.
    cin >> num;
    
    //Código de reptição. Enquanto a condição for verdadeira o programa irá repetir. No exemplo, se Num = 100, ele irá repetir até chegar a 100, mas nunca passar.
    while (i <= num){
        //Interface que irá mostrar todos os números até que a condição se quebre.
        cout << i << " ";
        //Uma das formas de escrever um Contador. Basciamente o "i" vai somar seu valor base até a atingir o limite da condição.(i vale 1, então vai ser 1+1...)
        i++;
    }
    return 0;
}