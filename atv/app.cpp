#include <iostream>
#include <cstdlib>

int main(){
    int i = 0;
    while (i < 100000){
        if(i == 1){
            std::cout << "Tarefas no momento da execução do programa:" << std::endl;
            system("ps aux");
        }

        i++;
    }

    std::cout << "Fim do programa." << std::endl;
    return 0;
}