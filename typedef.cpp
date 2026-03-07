#include <iostream>
#include <vector>

typedef std::string nome_t;
typedef int numero_t;

// vou fazer outra maneira de "typedef", só que nos comentários, pra facilitar minha vida

// using nome_t = std::string;
// using numero_t = int;

    int main(){
        nome_t nome = "LariBia";
        numero_t numero = 8;
        std::cout << "Boa tarde, " << nome << '\n';
        std::cout << "Fiquei sabendo que o seu número da sorte é " << numero << '\n';
        return 0;
    }