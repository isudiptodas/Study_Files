import java.util.Scanner;

public class primeList {

    static boolean isPrime(int n){

        boolean prime = true;
        for(int i=2; i<n; i++){
            if(n%i==0){
                prime = false;
                break;
            }
            else{
                continue;
            }
        }

        return prime;
    }
    static void printPrime(int st, int e){

        System.out.println("All prime numbers from "+st +" to "+e +" are : ");
        for(int i=st; i<=e; i++){
            if(isPrime(i)){
                System.out.print(i+" ");
            }
            else{
                continue;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter starting range : ");
        int start = sc.nextInt();
        System.out.print("Enter ending range : ");
        int end = sc.nextInt();

        printPrime(start, end);
    }
}
