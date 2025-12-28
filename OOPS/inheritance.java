
class  Vehicle{
  String color = "White";
  public void showColor(){
    System.out.println("color : "+color);
  }
}
class Car extends Vehicle{
  String model = "sedan";
  public void showModel(){
    System.out.println("Model : "+model);
  }
}
public class inheritance {
  public static void main(String[] args) {
    Vehicle v = new Vehicle();
    v.showColor(); // color : White

    Car c = new Car();
    c.showModel(); // Model : sedan
  }
}
