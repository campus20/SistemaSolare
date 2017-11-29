// Leonardo Conte

#include "CorpoCeleste.h"

CorpoCeleste::CorpoCeleste() {}

CorpoCeleste::CorpoCeleste(string nomeCorpo, float mass, float xpos, float ypos, float vxi, float vyi) {
  Nome = nomeCorpo;
  m = mass;
  x = xpos;
  y = ypos;
  vx = vxi;
  vy = vyi;
}

CorpoCeleste::~CorpoCeleste() {
  cout << endl << "Distruggo " << Nome << endl;
}

void CorpoCeleste::calcolaPosizione(float fx, float fy, float t) {
  double ax = fx/m;
  double ay = fy/m;
  vx += ax*t;
  vy += ay*t;
  x += vx*t;
  y += vy*t;
}

void CorpoCeleste::stampaPosizione() {
  cout.setf(ios::fixed);
  cout.setf(ios::showpos);
  cout << " " << setprecision(4) << setw(9) << x*1.e-11
       << " " << setprecision(4) << setw(9) << y*1.e-11;
}

void CorpoCeleste::stampaVelocita() {
  cout.setf(ios::fixed);
  cout.setf(ios::showpos);
  cout << " " << vx << " " << vy;
}

string CorpoCeleste::nome() { return Nome; }
double CorpoCeleste::M() { return m; }
double CorpoCeleste::X(){ return x; }
double CorpoCeleste::Y(){ return y; }
double CorpoCeleste::Vx(){ return vx; }
double CorpoCeleste::Vy(){ return vy; }

