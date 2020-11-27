#include <iostream>
#include <vector>
#include <string>

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
        string formatarHorario(int h, int min);
};
