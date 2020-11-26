#include "InterfacePrincipal.hpp"

string InterfacePrincipal::getString(string mensagem) {
    string entrada;
    while(true) {
        cout << mensagem;
        getline(cin, entrada);
        if(entrada.empty() || entrada[0] == ' ')
            cout << endl << "Entrada inválida" << endl; 
        else
            break; 
    }
    return entrada;
}

int InterfacePrincipal::getInt(string mensagem, int min, int max) {
    int valor;
    bool loop = true;
    while(loop) {
        cout << mensagem;
        loop = false;
        cin >> valor;
        if(cin.fail() || valor > max || valor < min) {
            cin.clear();
            cout << "Entrada inválida." << endl;
            loop = true;
        }
        cin.ignore(32767, '\n');
    }
    return valor;
}

InterfacePrincipal::InterfacePrincipal(){

}

void InterfacePrincipal::menuPrincipal() {
    while(true){
        cout << "(1) Nova tarefa" << endl;
        cout << "(2) Ver tarefas" << endl;
        cout << "(3) Definir intervalo entre tarefas" << endl;
        cout << "(4) Calcular a melhor escolha de tarefas" << endl;
        cout << "(0) Fechar programa" << endl; 
        int escolha = getInt("", 0,4);
        if(escolha == 1){
            novaTarefa(); 
        }
        else if(escolha == 2){
            verTarefas(); 
        }
        else if(escolha == 3){
            NovoIntervalo(); 
        }
        else if(escolha == 4){
            
        }
        else
            break; 
    }

}

void InterfacePrincipal::novaTarefa(){

}

void InterfacePrincipal::verTarefas(){
    
}

void InterfacePrincipal::NovoIntervalo(){

}



