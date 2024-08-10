import java.util.Scanner;

public class forEach {
    public static void main(String[] args) {
        String arr[] = {"C++", "C", "Java", "Python", "C#"};

        for(String names : arr){
            System.out.println(names);
        }
    }
}
