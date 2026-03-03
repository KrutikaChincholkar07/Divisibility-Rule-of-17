import java.util.Scanner;

public class DivisibleBy17 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int temp = num;

        while(temp > 100) {
            int last = temp % 10;
            temp = temp / 10 - 5 * last;
        }

        if(temp % 17 == 0)
            System.out.println(num + " is divisible by 17");
        else
            System.out.println(num + " is not divisible by 17");
    }
}
