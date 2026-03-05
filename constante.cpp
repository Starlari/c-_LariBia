// aqui estarei entendendo como funcionam as constantes (consts)

#include <iostream>

using namespace std;

/*constantes servem para que o determinado valor que esteja dentro da variável não se modifique, como exemplo: em uma  f(x)= ax + b, existe a variável (b), mas também existe um valor que não pode mudar, que nesse caso, é o "a", sendo essa a constante da função, um número que não se modifica independente do que aconteça*/

    int main (){

        const double pi = 3.14;     
        double graus = 90;
        double circunferencia = 2 * pi * graus;

        std::cout << circunferencia << "cm";
        return 0;
    }