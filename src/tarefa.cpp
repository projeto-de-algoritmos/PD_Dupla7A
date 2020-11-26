#include "tarefa.hpp"

Tarefa::Tarefa(string descricao, int hrI, int hrF, int minI, int minF, double renda, int grau){
    this->descricao = descricao;
    this->hrI = hrI;
    this->hrF = hrF; 
    this->minI = minI;
    this->minF = minF; 
    this->renda = renda;  
    this->grauDificuldade = grau;   
}

void Tarefa::mostrarInfos(){
    cout << "Tarefa: " << descricao << endl;
    cout << "Horário de início: ";
    formatarHorario(hrI, minI);
    formatarHorario(hrF, minF);
    cout << "Salário: " << renda << endl; 
}

void Tarefa::formatarHorario(int h, int m) {
    if(h < 10)
        cout << "0"; 
    cout << h << ":";
    if(m < 10)
        cout << "0";
    cout << m << endl; 
}