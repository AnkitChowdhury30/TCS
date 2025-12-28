#include<iostream>
using namespace std;

class Vehicle{
  public:
    string color = "white";
    void showColor(){
      cout<<"color : "<<color<<endl;
    }
};
class Car : public Vehicle{
  public:
    string model ="sedan";
    void showModel(){
      cout<<"Model : "<<model<<endl;
    }
};
int main(){
  Vehicle v;
  v.showColor(); // color : white
  Car c;
  c.showModel(); // Model : sedan
  return 0;
}