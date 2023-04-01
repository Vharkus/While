//Biblioteca padrão.
#include <iostream>
//Usada para evitar escrever "std::".
using namespace std;
int main() {
    //Declaração da variável.
    int num;
    //Inteface pedindo um número.
    cout << "Digite um número inteiro positivo:"; 
    //Leitor que coleta e armazena os dados na variável.
    cin >> num;
    //Interface que mostrará uma quantidade de pares relativa com o nosso número.
    cout << "Os primeiros " << num << " são pares ";
    //Estrutura de repetição for. Irá repetir até que a condição seja atingida. Devemos criar uma variável qualquer, adicionar a condição para repetir e depois o contador que determinará quando o programa atingiu a condição.
    for(int i = 2; i <= num * 2; i+=2){
        //Interface que mostra os números do contador. Aqui serão os nossos números pares.
        cout << i << " ";
    }
    return 0;
}