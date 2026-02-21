import java.util.*;
public class Loop1 {
    void printHelloWorld(){
        int n = 1;
        while(n<=10){
            System.out.println("Hello, World!");
            n++;
        }
    }
    void userInput(){
        int n = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int count = sc.nextInt();
        while(n<=count) {
            System.out.println("Hello, World!");
            n++;
        }
    }
    void sum(){
        int n = 1;
        int sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int count = sc.nextInt();
        while(n<=count){
            sum +=n;
            n++;
        }
        System.out.print(sum);
    }
    public static void main(String[] args) {
        Loop1 obj = new Loop1();
        //obj.userInput();
        obj.sum();
    }
}
