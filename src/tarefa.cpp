#include "tarefa.hpp"

Tarefa::Tarefa(int hrI, int hrF, int minI, int minF, string descricao){
    this->hrI = hrI;
    this->hrF = hrF; 
    this->minI = minI;
    this->minF = minF; 
    this->descricao = descricao; 
}

void Tarefa::mostrarInfos(){
    cout << "Tarefa: " << descricao << endl;
    cout << "Horário de início: ";
    formatarHorario(hrI, minI);
    formatarHorario(hrF, minF);
}

void Tarefa::formatarHorario(int h, int m) {
    if(h < 10)
        cout << "0"; 
    cout << h << ":";
    if(m < 10)
        cout << "0";
    cout << m << endl; 
}