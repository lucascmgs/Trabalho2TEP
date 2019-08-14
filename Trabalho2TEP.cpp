#include <iostream>
#include <list>

using namespace std;


long ultimoTriangular = 1;
long ultimoNatural = 2;

void IncrementaTriangular(){
    ultimoTriangular = ultimoTriangular + ultimoNatural;
    ultimoNatural++;
    //cout << "Próximo triangular: " << ultimoTriangular << endl;

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
        cout << "itera " << numero << " triangular " << ultimoTriangular << " natural " << ultimoNatural << endl;
        IncrementaTriangular();
        if(numero == ultimoTriangular){
            return true;
        }
    }
    
    
    return false;
}

int main(){
    long i = 1;
    while(true){
        long quadradoAtual = i*i;
        bool ehMagico = ChecaTriangular(quadradoAtual);
        if(ehMagico){
            cout << quadradoAtual << " é magico" << endl;
        }
        i++;
    }

    return 0;
}