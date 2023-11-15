// import java.util.*;
// public class Function2{
//     public static void main(String args[]){
//          Scanner  sc = new Scanner(System.in);

//          System.out.print("Enter the value of a : ");
//          int a = sc.nextInt();
//          System.out.print("Enter the value of b : ");
//          int b = sc.nextInt();
//          int sum = a + b;

//          System.out.println("Sum of a + b is : "+sum); 
        
//     }
// }

import java.util.*;
public class Function2{
    public static int add(int a, int b){
         int sum = a + b;
         return sum;
    }
    public static void main(String args[]){
         System.out.println("Sum of a + b is : "+add(5,20)); 
    }
}