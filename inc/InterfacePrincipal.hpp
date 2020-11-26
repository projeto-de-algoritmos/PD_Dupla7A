#include <iostream>
#include <vector> 
#include <string> 

using namespace std;

class InterfacePrincipal {  
    public: 
        InterfacePrincipal(); 
        string getString(string mensagem); 
        int getInt(string mensagem, int min, int max); 
        void menuPrincipal();
        void novaTarefa(); 
        void verTarefas(); 
        void NovoIntervalo();  
};