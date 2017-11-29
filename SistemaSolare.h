// Leonardo Conte

#ifndef SISTEMASOLARE_H
#define SISTEMASOLARE_H

#include "CorpoCeleste.h"
#define G 6.673e-11

using namespace std;

class SistemaSolare {
  protected:
    CorpoCeleste ** pianeti; // lista pianeti
    int N; // quanti pianeti
  public:
    SistemaSolare(int n);
    ~SistemaSolare();
    int aggiungiPianeta(CorpoCeleste* unPianeta);
    void evolvi(float T, float dt);
    int nPianeti(){ return N; };
};

#endif
