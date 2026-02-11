import java.util.Scanner;
public class Sum {
    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        float c = sc.nextFloat();
        int sum = a + b;
        int product = a*b;
        System.out.println("Sum is: " + sum);
        System.out.println("Product is: " + product);
        System.out.println("Area of circle is: "+ (3.1415*c*c));
        
    }
    
}
