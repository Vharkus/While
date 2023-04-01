//Biblioteca padrão.
#include <iostream>
//Biblioteca padrão. Evite termos que escrever "std::" na frente de cada interface.
using namespace std;
//Definindo a função Soma junto das variáveis a e b.
float Soma (float a, float b)
{
    //Criando a variável Resultado.
    float Resultado;
    //Definindo a equação da variável.
    Resultado = a + b;
    //Fazer o valor obtido retornar para a variável.
    return Resultado;
}
//Definindo a função Subt/subtração junto de suas variáveis.
float Subt (float a, float b)
{
    //Criando uma variável para a função em questão.
    float Resultado;
    //Definindo a equação.
    Resultado = a - b;
    //Comando que manda o valor de volta para a variável.
    return Resultado;
}
//Função de multiplicação e suas variáveis.
float Multi (float a, float b)
{   //Criando a variável que irá armazenar a equação das variáveis.
    float Resultado;
    //Criando a equação.
    Resultado = a * b;
    //Forma de devolver o valor obtido.
    return Resultado;
}
//Função de divisão. Pode usar int, mas para padronizar foi colocado float em todas por conta da divisão e seus possíveis números quebrados.
float Divi (float a, float b)
{   //Variável que irá pegar os resultados.
    float Resultado;
    //Definindo a equação.
    Resultado = a / b;
    //Forma de receber o valor obtido.
    return Resultado;
}
//Corpo principal do programa. Ele que comanda e puxa as funções de fora.
int main(){
    //Variáveis do corpo principal.
    float a, b;
    //Interface para o usuário escolher os números.
    cout <<"Informe os números: "<< endl;
    //Forma de armazenar os números escolhidos nas variáveis.
    cin >> a >> b;
    //Interface que mostra o resultado da soma.
    cout <<"O valor da soma é: "<< Soma (a,b) << endl;
    //Interface que mostra o resultado da subtração.
    cout << "O valor da subtraçao é: " << Subt (a,b) << endl;
    //Interface que mostra o resultado da multiplicação.
    cout << "O valor da multiplicaçao é: " << Multi (a,b) << endl;
    //Interface que mostra o resultado da divisão.
    cout << "O valor da divisao é: " << Divi (a,b) << endl;
    //Não é necessário um "return 0", pois em cada função já temos um return, ou seja, já devolvem para o programa um valor.
}