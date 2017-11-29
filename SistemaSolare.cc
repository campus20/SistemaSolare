// Leonardo Conte

#include "SistemaSolare.h"
#include <cstdlib>
#include <cmath>
#include <iostream>

SistemaSolare::SistemaSolare(int n) {
  N = 0;
}

SistemaSolare::~SistemaSolare() {
  delete [] pianeti; // ?
}

int SistemaSolare::aggiungiPianeta(CorpoCeleste* unPianeta) {
  pianeti[N++] = unPianeta;
  return N;
}

void SistemaSolare::evolvi(float T, float dt) {
  float t = 0; // t0
  while (t<=T) {
    for (int i=0; i<N; i++) {
      double fx = 0.;
      double fy = 0.;
      for (int j=0; j<N; j++) {
        double d = sqrt( // distanza ? stesso pianeta
          pow((pianeti[i]->X()-pianeti[j]-X()), 2) +
          pow((pianeti[i]->Y()-pianeti[j]-Y()), 2)
        );
        if (d != 0) {
          fx += -G*pianeti[i]->M()*pianeti[j]->M() *
            (pianeti[i]

