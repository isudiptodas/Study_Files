public class InvertedHalfPyramid {
    public static void main(String args[]){
        int n = 5;
        int i, j;

        for(i=1; i<=5; i++){
            for(j=1; j<=n-i+1; j++){
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
}
