#include <iostream>

using namespace std; 

class Tarefa {
    private: 
        int hrI, hrF, minI, minF;
        string descricao; 
        double renda; 
    
    public:
        Tarefa(string descricao, int hrI, int hrF, int minI, int minF, double renda);
        void mostrarInfos();  
        void formatarHorario(int h, int min); 
        string getDescricao();
        int getHrI();
        int getMinI();
        int getHrF();
        int getminF();
        double getRenda();
};
