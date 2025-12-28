#include<iostream>
using namespace std;
class Calculator{
  public:
  int add(int a,int b){
    return a+b;
  }
  int add(int a,int b,int c){
    return a+b+c;
  }
};

class Animal{
  public:
  virtual void sound(){
   cout<<"Animal makes sound"<<endl;
  }
};
class Cat : public Animal{
  public:
  void sound(){
    cout<<"Cat makes sound"<<endl;
  }
};
int main(){
  Calculator c1;
  cout<<"sum : "<<c1.add(1,2)<<endl;
  cout<<"sum : "<<c1.add(1,2,3)<<endl;
  c1.add(1,2,3);

  Animal a1;
  a1.sound(); // Animal makes sound
  
  Animal *a2 = new Cat();
  a2->sound(); // Animal makes sound // without virtual keyword
  a2->sound(); // Cat makes sound // without virtual keyword

  return 0;
}
/*
virtual function 

ager hum chahte h ki base class ka refernece ya pointer variable derived class ka
function ko call kere to virtual keyword base class ke method mai lagaoo

ye runtime polymorphism ke liye jaruri h

override keyword 

ye derived class ke method jo ki override kerwana chahte ho uske smane lagnana 
chiaye taki computer automatically base class ka signature ko verify kere and\
yadi galat ho to error de

ager ye keryword na lagay to compiler automatically signature galat hone pe new
function derived class mai bana dega
*/