#include <iostream>
#include <string> 

using namespace std; 

class Tarefa {
    private: 
        int hrI, hrF, minI, minF;
        string descricao; 
    public:
        Tarefa(int hrI, int hrF, int minI, int minF);
        void mostrarInfos();  


};