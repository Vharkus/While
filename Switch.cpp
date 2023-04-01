//Biblioteca padrão.
#include <iostream>
//Evita o uso de "std::" para o código funcionar. 
using namespace std;
//Código principal.
int main() {
    //Declaração das variáveis.
    char op, resposta;
    float num1, num2;
    bool continuar = true;
    //Condição de repetição. Enquanto "continuar for verdadeiro o loop não para.
    while (continuar) {
    //Interface que pede o operador usado.
    cout << "Entre com o Operador: +,-,*,/: ";
    //Lê e armazena a informação na variável.
    cin >> op;
    //Interface interativa que pede os números desejados.
    cout << "Entre com dois valores: ";
    //Armazena respectivamente os números em cada variável.
    cin >> num1 >> num2;
    //Função semelhante ao "If", porem utilizada quando temos mais informações para lidarmos. "op" dará as informaões para o switch funcionar.
    switch(op) {
        //Case pega uma parte específica dentro da variável para analisar.
        case '+':
            //Interface que recebe os dois números usados e realiza a operação definida aqui também.
            cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
            //Encerra o case específico para não se misturar com os outros.
            break;
        //Case pega uma parte específica dentro da variável para analisar.
        case '-':
            //Interface que recebe os dois números usados e realiza a operação definida aqui também.
            cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
            //Encerra o case específico para não se misturar com os outros.
            break;
        //Case pega uma parte específica dentro da variável para analisar.
        case '*':
            //Interface que recebe os dois números usados e realiza a operação definida aqui também.
            cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
            //Encerra o case específico para não se misturar com os outros.
            break;
        //Case pega uma parte específica dentro da variável para analisar.
        case '/':
            //Interface que recebe os dois números usados e realiza a operação definida aqui também.
            cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
            //Encerra o case específico para não se misturar com os outros.
            break;
        //Semelhante a "Else", caso alguma informação que não tenha na variável usada seja digitado irá cair nessa parte aqui.
        default:
            //Interface interativa que dá a chance de colocar o operador correto para as equações.
            cout << "Operador errado, por favor insira o operador correto";
    }
    //Interface interativa que aparece sempre que uma conta acaba.
    cout << "Deseja continuar?" << endl;
    //Lê e armazena a informação na variável.
    cin >> resposta;
    //Relacionada a nossa resposta, caso o usuário escreva algo diferente do esperado irá ficar nesse loop até acertar.
    while(resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
        //Interface interativa que surge após dar a resposta errada. Aqui temos a chance de encerrar o programa de vez.
        cout << "Resposta inválida. Deseja continuar?(s/n): ";
        //Armazena a informação.
        cin >> resposta;
    }
        //Define que a variável continuar só funciona com "s" e "S". Se colocarmos alguma delas iriemos seguir no loop desejado, caso contrario iriemos finalizar o programa.
        continuar = (resposta == 's' || resposta == 'S');
    }
    return 0;
}