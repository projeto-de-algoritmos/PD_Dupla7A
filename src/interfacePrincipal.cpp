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

void InterfacePrincipal::menuPrincipal() {
    while(true){
        cout << "(1) Novo serviço" << endl;
        cout << "(2) Definir intervalo entre serviços" << endl;
        cout << "(3) Ver serviços" << endl;
        cout << "(4) Calcular a melhor escolha de serviços" << endl;
        cout << "(0) Fechar programa" << endl; 
        int escolha = getInt("", 0,4);
    }

}

