abstract class Shape{
  abstract void draw();
}
class Circle extends Shape{
  public void draw(){
    System.out.println("Drawing circle");
  }
}
interface Vehicle{
  void start();
}
class Car implements Vehicle{
  public void start(){
    System.out.print("Car starting");
  }
}
public class absraction {
  public static void main(String[] args){
    Shape s = new Circle();
    s.draw();

    Vehicle v = new Car();
    v.start();
  }
}
