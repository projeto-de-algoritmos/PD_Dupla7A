#include <iostream>
#include <vector> 
#include <string> 

#include "tarefa.hpp" 

using namespace std;

class InterfacePrincipal {  
    private:
        vector <Tarefa> tarefas; 

    public: 
        InterfacePrincipal(); 
        string getString(string mensagem); 
        int getInt(string mensagem, int min, int max); 
        double getDouble(string mensagem, double min); 
        void spam(string mensagem); 
        void menuPrincipal();
        void novaTarefa(); 
        void verTarefas(); 
        void NovoIntervalo();  
        void ExcluirTarefa(string descricao);
        void LimparTarefas(); 
};