
class BankAccount{
  private int balance=0;
  public void deposit(int ammount){
    if(balance >= 0){
      balance+=ammount;
    }
  }
  public int getBalance(){
    return balance;
  }
  public boolean withdraw(int ammount){
    if(balance>0 && ammount <= balance){
      balance -= ammount;
      return true;
    }
    else{
      System.out.println("insufficient balance");
      return false;
    }
  }
}
public class encapsulation {
  public static void main(String[] args) {
    BankAccount b1 = new BankAccount();
    b1.deposit(300);
    System.out.println("Balance : "+b1.getBalance());
    b1.withdraw(200);
    System.out.println("Balance : "+b1.getBalance());
    b1.withdraw(500);

  }
}
