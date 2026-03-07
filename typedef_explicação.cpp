// typedef: palavra-chave reservada usada para criar um nome adicional para outro data type. (tipo um apelido)
// Novo identificador para uma type existente
// Ajuda com reabilitação e reduz types


#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // < este é um longo data type, podendo ser um data type para uma lista par
// esse "pairlist_t" é um Alias, que é basicamente um apelido (existe um "_t" após esse alias para declarar que esse apelido é um type)

// o que eu posso fazer nesse caso, é criar um "alias" (um apelido) para não precisar escrever uma linha de código tão extensa
                        
using namespace std;

    int main(){
        std::vector<std::pair<std::string, int>> pairlist; /* ao invés de reescrever essa linha inteira, eu posso apenas declarar a variável com o apelido que eu coloquei*/

        pairlist_t pairlist;
        return 0;
    }