import java.util.Scanner;

public class twoDimensionalArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter no. of rows : ");
        int row = sc.nextInt();
        System.out.print("Enter no. of columns : ");
        int col = sc.nextInt();

        int arr[][] = new int[row][col];
        System.out.println("ARRAY CREATED !");

        System.out.println("Enter array elements : ");
        for(int i=0; i<row;i++){
            for(int j=0; j<col; j++){
                arr[i][j] = sc.nextInt();
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
