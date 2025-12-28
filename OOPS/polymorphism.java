class Calculator{
  public int add(int a,int b){
    return a+b;
  }
  public int add(int a,int b,int c){
    return a+b+c;
  }
}
class Animal{
  void sound(){
    System.out.println("Animal makes sound");
  }
}
class Cat extends Animal{
  @Override
  void sound(){
    System.out.println("Cat makes sound");
  }
}
public class polymorphism {
  public static void main(String[] args){
    Calculator c1 = new Calculator();
    System.out.println("Result : "+c1.add(1,2));
    System.out.println("Result : "+c1.add(1,2,3));

    Animal a1=new Animal();
    a1.sound();
    Animal a2 = new Cat();
    a2.sound();
  }
}
