// Criar uma classe chamada hora que tenha membros dados separados de tipo int para horas, 
// minutos e segundos. Um construtor inicializará esse dado a 0 e outro o inicializará a valores 
// fixos. Uma função- membro deverá visualizar a hora em formato 11:59:59. Outra função-membro 
// somará dois objetos de tipo hora passados como argumentos. Uma função principal main() cria d
// ois objetos inicializados e um que não está inicializado. Somar os dois valores inicializados 
// e deixar o resultado no objeto não ini- cializado. Por último, visualizar o valor resultante.

#include <iostream>
#include "Hora.h"

int main(){
    Hora iniciando1(11, 59, 59);
    Hora iniciando2(45, 73, 29);
    Hora naoIniciando;

    iniciando1.somar(iniciando2, naoIniciando);
    naoIniciando.visualizarHoras();
}