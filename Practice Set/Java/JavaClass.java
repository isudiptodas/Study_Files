class student{
  private int rollNo;
  private String name;

  public void setrollNo(int r){
    rollNo = r;
  }
  public int getrollNo(){
    return rollNo;
  }

  public void setname(String n){
    name = n;
  }
  public String getname(){
    return name;
  }
  
}
public class JavaClass {
  public static void main(String[] args){
    student sudipto = new student();
    sudipto.setname("Tintin");
    sudipto.setrollNo(58);

    System.out.println("Student name is " +sudipto.getname());
    System.out.println("Student roll no is : " +sudipto.getrollNo());
  }
}