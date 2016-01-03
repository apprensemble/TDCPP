#include "fonction.h"
using namespace std;

void french::bonjour() {
  cout<<"Entrez votre prenom: ";
  string prenom;
  cin>>prenom;
  cout<<"Bonjour "<<prenom<<"\n";
}
void exerciceA() {
  int r;
  cout<<"donnez le rayon entier d'un cercle : ";
  cin>>r;
  const double pi=3.14159;
  double p = 2 * pi * r;
  double s = pi * r * r;
  cout<<"le cercle de rayon"<<r<<"a un perimetre de "<<p<<" et une surface de "<<s<<"\n"; 
}

void anglais::bonjour() {
  cout<<"hello\n";
}

//int fct(int x) {
  //cout<<"1:"<<x<<"\n";
  //return 0;
//}
int fct(float y) {
  cout<<"2:"<<y<<"\n";
  return 0;
}
int fct(int x, float y) {
  cout<<"3:"<<x<<"  "<<y<<"\n";
  return 3.14;
}
int fct(float x,int y) {
  cout<<"4:"<<x<<"  "<<y<<"\n";
  return 0;
}
int fct(int x,int y) {
  std::cout<<"5:"<<x<<"  "<<y<<"\n";
}
int fct(int x,double y) {
  cout<<"6:"<<x<<"  "<<y<<"\n";
}
float fct(float x,float y) {
    cout<<"7:"<<x<<"  "<<y<<"\n";
}


void exercice_surcharge() {
  int i=3, j=15;
  float x = 3.14159,y=1.414;
  char c='A';
  double z=3.14159265;
  fct(i);
  fct(x,j);
  fct(i,j);
  fct(i,z);
}
void inverse(int& a,int& b) {
  int tmp;
  cout<<"inverse a:"<<a<<"\n";
  tmp = a;
  a = b;
  b = tmp;
}
void inverse(int* a,int* b) {
  int tmp;
  cout<<"inverse a:"<<a<<"\n";
  tmp = *a;
  *a = *b;
  *b = tmp;
}
