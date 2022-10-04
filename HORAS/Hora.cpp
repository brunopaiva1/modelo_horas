// Criar uma classe chamada hora que tenha membros dados separados de tipo int para horas, 
// minutos e segundos. Um construtor inicializará esse dado a 0 e outro o inicializará a valores 
// fixos. Uma função- membro deverá visualizar a hora em formato 11:59:59. Outra função-membro 
// somará dois objetos de tipo hora passados como argumentos. Uma função principal main() cria d
// ois objetos inicializados e um que não está inicializado. Somar os dois valores inicializados 
// e deixar o resultado no objeto não ini- cializado. Por último, visualizar o valor resultante.

#include <iostream>
#include "Hora.h"

using namespace std;

Hora::Hora(){
    setHorario(0, 0, 0);
    cout << "inicializando igual a zero" << endl;
} 

Hora::Hora(int h, int m, int s){
    setHorario(h, m , s);
    cout << "inicializando a valores fixos" << endl;
}

void Hora::setHorario(int hh, int mm, int ss){
    horas = hh;
    minutos = mm;
    segundos = ss;
}

int Hora::getHoras(){
    return horas;
}

int Hora::getMinutos(){
    return minutos;
}

int Hora::getSegundos(){
    return segundos;
}

void Hora::visualizarHoras(){
    cout << horas << ":" << minutos << ":" << segundos << endl;
}

Hora Hora::somar(Hora a, Hora& b){
    int h1, m1, s1;

    h1 = a.getHoras();
    m1 = a.getMinutos();
    s1 = a.getSegundos();
    b.setHorario(h1+horas, m1+minutos, s1+segundos);
    return b;
}