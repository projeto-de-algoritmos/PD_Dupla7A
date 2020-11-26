#include <iostream>
#include <vector> 
#include <string> 

using namespace std;

class InterfacePrincipal {  
    public: 
        InterfacePrincipal(); 
        void menuPrincipal();
        string getString(string mensagem); 
        int getInt(string mensagem, int min, int max); 
};