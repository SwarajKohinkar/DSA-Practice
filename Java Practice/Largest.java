import java.util.Scanner;
public class Largest {
    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (a>b && a>c){
            System.out.print(a+" is the largest number");

        }
        else if (b>a && b>c){
            System.out.print(b+"is the largest number");

        }
      else{
        System.out.print(c+"is the largest number");
      }
    }
}
