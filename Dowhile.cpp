//Biblioteca padrão.
#include <iostream>
//Evita a repetição do "std::".
using namespace std;
//Programa principal.
int main() {
    //Declaração da variável.
    int num;
    //Tudo dentro do "do" irá acontecer pelo menos uma vez. Se a condição for verdadeira o programa ficará repetindo.
    do{
        //Interface que pede o número.
        cout << "Digite um número entre 1 e 10: ";
        //Lê e armazena o número o valor dentro da variável.
        cin >> num;
        //While irá analisar e ver se a condição foi cumprida ou não.
    } while (num < 1 || num > 10);
    //Interface que mostra ao usuário o número digitado.
    cout<<"Você digitou o número: " << num << ".";
    return 0;
}