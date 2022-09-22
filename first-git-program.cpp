#include<iostream>

using namespace std;

class B;
class C;
class A{
public:

void show (B b1,C c1);

};

class B{

int b = 23;

friend void A::show (B b1,C c1);

};

class C{

int c = 34 ;

friend void A::show (B b1,C c1);

};

void A::show (B b1,C c1) { 
  cout<<"the value of class B data member b is "<<b1.b<<endl;
  cout<<"the value of class C data member c is "<<c1.c;
 }

int main(){

A al;

B b1;

C c1;

//a1.show() 
//show(01);

al.show(b1,c1);

return 0;

}