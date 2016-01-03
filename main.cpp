#include "fonction.h"
using namespace std;
int main() {
  french::bonjour();
  anglais::bonjour();
  exerciceA();
  exercice_surcharge();
  //exercice 8
  double x = 3.14;
  cout<<"x:"<<x<<"\n";
  double y;
  cout<<"avant def y:"<<y<<"\n";
  y = 3.14;
  cout<<"apres def y:"<<y<<"\n";
double* pt1;// = 4096;
  double* pt2 = (double*) 4096;
  void* pt3 = pt1;
  //pt1 = pt3;
  pt1 = (double*) pt3;
  double d1 = 36;
  const double d2 = 36;
  double* pt4 = &d1;
  const double* pt5=&d1;
  int a_ = 1;
  int b_ = 2;
  int* a = &a_;
  int* b = &b_;

  inverse(a_,b_);
  inverse(a,b);
  cout<<"a:"<<*a<<" "<<"b:"<<*b<<"\n";
  return 0;
}
