#include "tarefa.hpp"
#include <iomanip>

Tarefa::Tarefa(string descricao, int hrI, int hrF, int minI, int minF, double renda){
    this->descricao = descricao;
    this->hrI = hrI;
    this->hrF = hrF; 
    this->minI = minI;
    this->minF = minF; 
    this->renda = renda;  
}

void Tarefa::mostrarInfos(){
    cout << "Tarefa: " << descricao << endl;
    cout << "Horário de início: ";
    formatarHorario(hrI, minI);
    cout << "Horário de fim: ";
    formatarHorario(hrF, minF);
    cout << "Salário: R$" << fixed << setprecision(2) << renda << endl << endl; 
}

void Tarefa::formatarHorario(int h, int m) {
    if(h < 10)
        cout << "0"; 
    cout << h << ":";
    if(m < 10)
        cout << "0";
    cout << m << endl; 
}

string Tarefa::getDescricao() {
    return descricao;
}

int Tarefa::getHrI(){
  	return hrI; 
}

int Tarefa::getMinI(){
  	return minI; 
}

int Tarefa::getHrF(){
  	return hrF; 
}

int Tarefa::getminF(){
  	return minF; 
}

double Tarefa::getRenda() {
	return renda;
}
