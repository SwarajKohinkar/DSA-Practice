import java.util.Scanner;  
public class Calculator {
    public static void main(String[] args){
Scanner sc = new Scanner(System.in);
System.out.print("Enter the first no:");
int a = sc.nextInt();
System.out.print("Enter the secont no: ");
int b = sc.nextInt();
System.out.print("Enter the operator: ");
char operator = sc.next().charAt(0);
switch (operator) {
    case '+':
        System.out.println(a+b);
        break;
    case '-':
        System.out.println(a-b);    
        break;
    case '*':
        System.out.println(a*b);
        break;
    case '/':
        if (b != 0) {
            System.out.println(a/b);
        } else {
            System.out.println("Error: Division by zero is not allowed.");
        }
        break;
        default:
        System.out.println("Invalid operator");        
}
    }
}
//Fun
