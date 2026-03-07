#include <iostream>

using namespace std;

    int main(){
        
        int estudantes = 36;
        double real = 100;
        //estudantes = estudantes + 1; -- ou pode ser assim: (deixei em forma de comentário para não me atrapalhar)
        estudantes+=1;
        real/=8;
        std::cout << estudantes << '\n';
        std::cout << real << '\n';

        return 0;
    }

    // isso serve para todos os sinais de operação (soma, subtração, multiplicação e divisão) =)
    // caso o resultado precise sair em forma decimal, mudamos a variável int para double