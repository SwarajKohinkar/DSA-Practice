import java.util.Scanner;
public class TypeCasting {
    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        double a = sc.nextDouble();
        int b = (int)a;
        System.out.println("Double value is: " + a);
        System.out.println("Integer value is: " + b);
    }
}
