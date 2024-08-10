import java.util.Scanner;

public class arraySum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];

        System.out.print("Enter array elements: ");
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        int arraySum = 0;
        for(int i=0; i<arr.length; i++){
            arraySum+=arr[i];
        }

        System.out.println("Sum of all array elements are : "+arraySum);
    }
}
