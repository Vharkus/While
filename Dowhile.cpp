//Biblioteca padr�o.
#include <iostream>
//Evita a repeti��o do "std::".
using namespace std;
//Programa principal.
int main() {
    //Declara��o da vari�vel.
    int num;
    //Tudo dentro do "do" ir� acontecer pelo menos uma vez. Se a condi��o for verdadeira o programa ficar� repetindo.
    do{
        //Interface que pede o n�mero.
        cout << "Digite um n�mero entre 1 e 10: ";
        //L� e armazena o n�mero o valor dentro da vari�vel.
        cin >> num;
        //While ir� analisar e ver se a condi��o foi cumprida ou n�o.
    } while (num < 1 || num > 10);
    //Interface que mostra ao usu�rio o n�mero digitado.
    cout<<"Voc� digitou o n�mero: " << num << ".";
    return 0;
}