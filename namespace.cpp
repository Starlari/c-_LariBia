// o namespace pode ser utilizado em algumas situações caso uma variável precise ser repetida mais de uma vez, só que com valores/caracteres diferentes


#include <iostream>

using namespace std;
namespace first {
    int x = 3;
}

    int main(){

        /*se eu usar um "Using namespace" dentro desse main, ex: using namespace first, na saída da variável, eu não preciso declarar se é o primeiro, segundo, terceiro e etc*/

        int x = 0;
        std::cout << first::x;

        return 0;
    }