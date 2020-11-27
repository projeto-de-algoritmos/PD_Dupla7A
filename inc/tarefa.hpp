#include <iostream>
#include <string> 

using namespace std; 

class Tarefa {
    private: 
        int hrI, hrF, minI, minF;
        string descricao; 
        double renda; 
        int grauDificuldade; 
    
    public:
        Tarefa(string descricao, int hrI, int hrF, int minI, int minF, double renda, int grau);
        void mostrarInfos();  
        void formatarHorario(int h, int min); 
        string getDescricao();
        int getHrI();
        int getMinI();
        int getHrF();
        int getminF();
        double getRenda();
};
