#include <iostream>

using namespace std;

    int main(){

        std::string nome = "LariBia";
        int idade = 17;
        char turma = 'B';
        std::string serie = "3° ano";
        std::string tecnico = "Desenvolvimento de Sistemas";

        std::cout << "Olá, " << nome << '\n';
        std::cout << "Sua idade atual é " << idade << '\n';
        std::cout << "Você está atualmente na turma " << turma << '\n';
        std::cout << "Você está no " << serie << '\n';
        std::cout << "Ao mesmo tempo que faz um técnico em " << tecnico << '\n';
        
        return 0;
    }