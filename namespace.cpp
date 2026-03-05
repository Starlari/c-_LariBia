// o namespace pode ser utilizado em algumas situações caso uma variável precise ser repetida mais de uma vez, só que com valores/caracteres diferentes


#include <iostream>

using namespace std;
namespace first {
    int x = 3;
}

    int main(){

        int x = 0;
        std::cout << x;

        return 0;
    }