public class method {

    static void welcome(String name){
        System.out.print("Welcome "+name+" ");
        System.out.println("I am method and I have been called");
    }

    static void num(int a, int b){
        System.out.println(a+" + "+b +" = "+(a+b));
        System.out.println(a+" - "+b +" = "+(a-b));
        System.out.println(a+" * "+b +" = "+(a*b));
        System.out.println(a+" / "+b +" = "+(a/b));
        System.out.println("-------------------------------------");
    }

    public static void main(String[] args) {

        welcome("Sudipto");
        num(7, 9);
        num(11, 7);
        num(12, 20);
    }
}
