//Biblioteca padr�o.
#include <iostream>
//Evita o uso de "std::" para o c�digo funcionar. 
using namespace std;
//C�digo principal.
int main() {
    //Declara��o das vari�veis.
    char op, resposta;
    float num1, num2;
    bool continuar = true;
    //Condi��o de repeti��o. Enquanto "continuar for verdadeiro o loop n�o para.
    while (continuar) {
    //Interface que pede o operador usado.
    cout << "Entre com o Operador: +,-,*,/: ";
    //L� e armazena a informa��o na vari�vel.
    cin >> op;
    //Interface interativa que pede os n�meros desejados.
    cout << "Entre com dois valores: ";
    //Armazena respectivamente os n�meros em cada vari�vel.
    cin >> num1 >> num2;
    //Fun��o semelhante ao "If", porem utilizada quando temos mais informa��es para lidarmos. "op" dar� as informa�es para o switch funcionar.
    switch(op) {
        //Case pega uma parte espec�fica dentro da vari�vel para analisar.
        case '+':
            //Interface que recebe os dois n�meros usados e realiza a opera��o definida aqui tamb�m.
            cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
            //Encerra o case espec�fico para n�o se misturar com os outros.
            break;
        //Case pega uma parte espec�fica dentro da vari�vel para analisar.
        case '-':
            //Interface que recebe os dois n�meros usados e realiza a opera��o definida aqui tamb�m.
            cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
            //Encerra o case espec�fico para n�o se misturar com os outros.
            break;
        //Case pega uma parte espec�fica dentro da vari�vel para analisar.
        case '*':
            //Interface que recebe os dois n�meros usados e realiza a opera��o definida aqui tamb�m.
            cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
            //Encerra o case espec�fico para n�o se misturar com os outros.
            break;
        //Case pega uma parte espec�fica dentro da vari�vel para analisar.
        case '/':
            //Interface que recebe os dois n�meros usados e realiza a opera��o definida aqui tamb�m.
            cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
            //Encerra o case espec�fico para n�o se misturar com os outros.
            break;
        //Semelhante a "Else", caso alguma informa��o que n�o tenha na vari�vel usada seja digitado ir� cair nessa parte aqui.
        default:
            //Interface interativa que d� a chance de colocar o operador correto para as equa��es.
            cout << "Operador errado, por favor insira o operador correto";
    }
    //Interface interativa que aparece sempre que uma conta acaba.
    cout << "Deseja continuar?" << endl;
    //L� e armazena a informa��o na vari�vel.
    cin >> resposta;
    //Relacionada a nossa resposta, caso o usu�rio escreva algo diferente do esperado ir� ficar nesse loop at� acertar.
    while(resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
        //Interface interativa que surge ap�s dar a resposta errada. Aqui temos a chance de encerrar o programa de vez.
        cout << "Resposta inv�lida. Deseja continuar?(s/n): ";
        //Armazena a informa��o.
        cin >> resposta;
    }
        //Define que a vari�vel continuar s� funciona com "s" e "S". Se colocarmos alguma delas iriemos seguir no loop desejado, caso contrario iriemos finalizar o programa.
        continuar = (resposta == 's' || resposta == 'S');
    }
    return 0;
}