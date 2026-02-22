import java.util.*;
public class Factorial {
    int factorial(int n){
        int f = 1;
        for(int i = 1; i <= n; i++){
            f = f * i;
        }
        return f;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Factorial fc = new Factorial();
        int result = fc.factorial(n);
        System.out.println(result);
    }
}

