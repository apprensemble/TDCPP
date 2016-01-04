#if !defined(_FONCTION_H)
#define _FONCTION_H
#include<iostream>
#include<string>
#include <stdlib.h>
namespace anglais {
  void bonjour(); 
}
namespace french {
  void bonjour();
}
void exerciceA();
inline int fct(int x) { std::cout<<"1:"<<x<<"\n"; return 0; }
int fct(float y);
int fct(float x,int y);
int fct(int x,int y);
int fct(int x,double y);
float fct(float x,float y);
void exercice_surcharge();
void inverse(int& a,int& b);
void inverse(int* a,int* b);
namespace TD1 {
  struct essai {
    int n;
    float x;
    void raz() {
      n = 0;
      x = 0;
    }
  };
}
void raz(TD1::essai* e);
void raz(TD1::essai& e);

void truc1(const int& x) ;

void truc2(int& x) ;

struct point {
  int x;
  int y;
  int z;
};

  void init(point& pt, int _x=0, int _y=0, int _z=0);
  /* les nouvelles possibilités offerte par le c++ sont les valeurs par defaut et l'envoie d'arg par reference 
  void init(point* pt, int _x,int _y);
  void init(point* pt, int _x);
  void init(point* pt);
  */

  void essai_init();   
  void essai_alloc();
#endif
