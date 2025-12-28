#include<iostream>
using namespace std;
class Shape{
  public:
  virtual void draw() = 0;
};
class Circle : public Shape{
  public:
  void draw() override{
    cout<<"Drawing circle\n";
  }
};
int main(){
  // Shape s; // cant make obj of Shape class since it is abstract class
  Shape *s = new Circle();
  s->draw(); // Drawing circle
  return 0;
}