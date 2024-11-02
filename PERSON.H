// person.h - Arquivo de cabeçalho para a classe Person

#ifndef PERSON_H
#define PERSON_H

#include "elevsim.h"

// Classe Person: Representa uma pessoa no prédio
class person {
private:
    int floorNowOn;       // Andar atual da pessoa (-1 se estiver fora do prédio)
    int destination;     // Andar de destino
    int waitingForElev;  // Indica se a pessoa está esperando pelo elevador (1 = sim)
    int takingStairs;    // Indica se a pessoa está usando a escada (1 = sim)
    int elevNowIn;       // Número do elevador que a pessoa está (ou -1 se não estiver em nenhum)

public:
    person(); // Construtor padrão
    void action(); // Função que determina a ação da pessoa (esperar, entrar no elevador, etc.)
    // Funções para verificar se a pessoa está esperando em um determinado andar
    int upwaiting(int floorNumber);
    int dnwaiting(int floorNumber);
    // Funções para embarcar e desembarcar pessoas do elevador
    int loadIfGoing(int elevNumber, int floorNumber, int &pdest);
    int loadIfWaiting(int elevNumber, int floorNumber, int &pdest);
    int discharge(int elevNumber, int floorNumber);
};

// Classe personCollection: Coleção de objetos Person
class personCollection {
private:
    person pa[MAXPERSONS]; // Array para armazenar as pessoas

public:
    // Funções para manipular a coleção de pessoas
    void action();
    void numWaiting(int floorNumber, int &nup, int &ndn);
    int loadAny(int elevNumber, int floorNumber, int &pdest);
    int loadOne(int elevNumber, int floorNumber, int direction, int &pdest);
    int discharge(int elevNumber, int floorNumber);
};

#endif // PERSON_H