#include <iostream>
#include <vector> 
#include <string> 

#include "tarefa.hpp" 

using namespace std;

class InterfacePrincipal {  
    private:
        Tarefa tarefas; 

    public: 
        InterfacePrincipal(); 
        string getString(string mensagem); 
        int getInt(string mensagem, int min, int max); 
        void menuPrincipal();
        void novaTarefa(); 
        void verTarefas(); 
        void NovoIntervalo();  
        void ExcluirTarefa(string descricao);
        void LimparTarefas(); 
};