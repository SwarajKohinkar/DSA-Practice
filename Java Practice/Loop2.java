import java.util.*;
public class Loop2 {
    void printNumbers(int n) {
        for (int i = 1; i <= n; i++) {
            System.out.println(i);
        }
    }
    void pattern1(){
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        n = sc.nextInt();
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    void reverseNumber(){
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        while(n>0){
            int lastDigit = n%10;
            System.out.print(lastDigit);
            n = n/10;
        }
        System.out.println();

    }
    void doWhile(){
        int counter = 1;
        do{
        System.out.println("Hello, World!");
        counter++;
        }
        while(counter<=10);
    }
    void breakk(){
        Scanner sc = new Scanner(System.in);
        do{
            int n = sc.nextInt();
            System.out.println(n);
            if(n%10==0){
                break;
            }
        }
        while(true);
    }
    void continuee(){
        Scanner sc = new Scanner(System.in);
        do{
            int n = sc.nextInt();
            if(n%10==0){
                continue;
            }
            System.out.println(n);
        }
        while(true);
    }
    public static void main(String args[]){
        Loop2 obj = new Loop2();
        //obj.printNumbers(5);
        //obj.pattern1();
        //obj.reverseNumber();
        //obj.doWhile();
        //obj.breakk();
        obj.continuee();
    }
}
