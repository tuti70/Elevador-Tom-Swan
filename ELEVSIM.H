// elevsim.h - Arquivo de cabeçalho para a simulação de elevador

#ifndef ELEVSIM_H
#define ELEVSIM_H

// ===========================================================================
// Constantes e macros
// ===========================================================================

// Valores booleanos
#define FALSE 0
#define TRUE 1

// Direções do elevador
#define UP 1
#define DOWN -1
#define NODIRECTION 0

// Código ASCII da tecla Esc
#define ESCKEY 27

// Limites e parâmetros da simulação (ajustáveis)
#define MAXELEVS 10        // Número máximo de elevadores (1 a 10)
#define MAXFLOORS 10       // Número máximo de andares (2 a 10)
#define MAXPERSONS 500     // Número máximo de pessoas no prédio
#define ELEVWAIT 15        // Tempo mínimo de espera em um andar (segundos)
#define CAPACITY 24       // Capacidade máxima de pessoas por elevador
#define TRAVELTIME 5       // Tempo de viagem entre andares (segundos)

// Fórmulas para tomar decisões aleatórias na simulação
// Ajustar esses valores para modificar o comportamento da simulação
#define WANTS_TO_ENTER (rand() < 200)
#define ENTER_DEST (1 + (rand() % (MAXFLOORS - 1)))
#define MAX_WAIT (180 + (rand() % 180))
#define BUSINESS (400 + (rand() % 600))
#define LEAVING (rand() < 22000)

// ===========================================================================
// Variáveis globais
// ===========================================================================

// Essas variáveis são definidas em elevsim.cpp e são usadas para exibir
// estatísticas da simulação.
extern unsigned totalPeople;    // Número total de pessoas atendidas
extern unsigned inBuilding;      // Número de pessoas atualmente no prédio
extern unsigned leftBuilding;   // Número de pessoas que saíram do prédio
extern unsigned avgWait;        // Tempo médio de espera
extern unsigned avgRide;        // Número médio de pessoas nos elevadores
extern unsigned tookStair;      // Número de pessoas que usaram a escada
extern unsigned totalTime;      // Tempo total de simulação (segundos)

#endif // ELEVSIM_H