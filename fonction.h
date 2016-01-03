#if !defined(_FONCTION_H)
#define _FONCTION_H
#include<iostream>
#include<string>
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

#endif
