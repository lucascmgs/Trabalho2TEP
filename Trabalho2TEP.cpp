#include <iostream>
#include <list>

using namespace std;


long long ultimoTriangular = 1;
long ultimoNatural = 2;

void IncrementaTriangular(){
    ultimoTriangular += ultimoNatural;
    ultimoNatural++;
}

bool ChecaTriangular(long numero){
    if(numero < ultimoTriangular){
        return false;
    }
    if(numero == ultimoTriangular){
        IncrementaTriangular();
        return true;
    }

    while(ultimoTriangular < numero){
        IncrementaTriangular();
        if(numero == ultimoTriangular){
            return true;
        }
    }
    
    return false;
}

int main(){
    long imparAtual = 1;
    long quadradoAtual = 1;
    while(true){
        bool ehMagico = ChecaTriangular(quadradoAtual);
        if(ehMagico){
            cout << quadradoAtual << " é magico" << endl;
        }
        imparAtual += 2;
        quadradoAtual += imparAtual;
    }

    return 0;
}