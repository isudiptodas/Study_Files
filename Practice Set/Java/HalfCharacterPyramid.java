public class HalfCharacterPyramid {
    public static void main(String args[]){
        int i, j, n = 5;
        char ch = 'A';

        // Outer loop
        for(i=1; i<=n; i++){
            // Inner loop
            for(j=1; j<=i; j++){
                System.out.print(ch);
                ch++;
            }
            System.out.println();
        }
    }
}