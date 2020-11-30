#include <iostream>
#include <vector>

#include "tarefa.hpp"

using namespace std;

class InterfacePrincipal {
    private:
        vector <Tarefa> tarefas;
        int hrIntervalo, minIntervalo; 

    public:
        InterfacePrincipal();
        string getString(string mensagem);
        int getInt(string mensagem, int min, int max);
        double getDouble(string mensagem, double min);
        void spam(string mensagem);
        void menuPrincipal();
        void novaTarefa();
        void verTarefas();
        void novoIntervalo();
        void excluirTarefa();
        void limparTarefas();
        void ordenarTarefas(vector <Tarefa> &tarefas);
        int computeP(vector <Tarefa> &tarefas, int j);
        bool isCompativel(Tarefa &a, Tarefa &b);   
        string formatarHorario(int h, int min);
        double computeOptRenda(vector <Tarefa> &tarefas, vector <double> &M, vector <int> &p, int j);
        void conjuntoRentavel();
        void findSolution(vector <Tarefa> &tarefas, vector <double> &M, vector <int> &p, int j); 
};
