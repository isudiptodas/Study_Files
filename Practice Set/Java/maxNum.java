import java.util.Scanner;

public class maxNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array : ");
        int size = sc.nextInt();
        int arr[] = new int[size];

        System.out.print("Enter array elements: ");
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        int maxNum = arr[0];
        for(int i=0; i<size; i++){
            if(arr[i]>maxNum){
                maxNum = arr[i];
            }
        }

        System.out.println("Maximum number in array is : "+maxNum);
    }
}
