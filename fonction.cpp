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
void raz(TD1::essai* e) {
  e->n=0; e->x=0;
}
void raz(TD1::essai& e) {
  e.n=0;e.x=0;
}
//exercice 14
void truc1(const int& x) {
  std::cout<<x<<"\n";
  //x++;
  //std::cout<<x<<"\n";
}
void truc2(int& x) {
  x++;
  truc1(x);
  x++;
  std::cout<<"xtd2:"<<x<<"\n";
}
void truc3(const int& x) {
  //truc2(x);
  double y=x;
  //double& z=x;
  double& u=y;
  //double& t=y-3;
}
void init(point& pt, int _x, int _y, int _z) {
  pt.x=_x;
  pt.y=_y;
  pt.z=_z;
}

/*
   void init(point* pt, int _x,int _y) {
   pt->x=_x;
   pt->y=_y;
   pt->z=0;
   }

   void init(point* pt, int _x) {
   pt->x=_x;
   pt->y=0;
   pt->z=0;
   }

   void init(point* pt) {
   pt->x=0;
   pt->y=0;
   pt->z=0;
   }
   */

  void essai_init() {
    point p;
    init(p);
    init(p,1);
    init(p,1,2);
    init(p,1,2,3);
  }

void essai_alloc() {
  int* pt_int;
  double* pt_double;
  pt_int=(int*)malloc(sizeof(int));
  pt_double=(double*)malloc(sizeof(double)*100);
  free(pt_int);
  free(pt_double);
}
