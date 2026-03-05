#include <iostream>

using namespace std;

    int main(){
        
       //int significa inteiro (ou integer)
       //double significa números incluindo inteiros e decimais (numbers including integer and decimals)
       //char serve para caracteres individuais
       //boolean serve para indicar verdadeiro ou falso (true or false), mas se usa apenas o "bool" da variável
       //string são objetos que representam uma sequência de textos (para declarar, usa-se: std::string variável = "Palavra desejada")
       
        int x; // declaração/declaration
        x = 8; //atribuição/assignment

        int y;
        y = 10;

        int soma = x + y; //o "soma" pode ser substituído por "sum", traduzindo para o inglês

        double peso = 62.3;

        char genero = 'F'; //obs: não dá pra usar acentos no c++, por ser uma linguagem que possui o inglês como idioma padrão :(

        bool estuda = true;

        std::string nome = "LariBia";

        std::cout << x << '\n';
        std::cout << y << '\n';
        std::cout << soma << '\n';
        std::cout << peso << '\n';
        std::cout << genero << '\n';
        std::cout << estuda << '\n';
        std::cout << nome << '\n';

        return 0;
    } 