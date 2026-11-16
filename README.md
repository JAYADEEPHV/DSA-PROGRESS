import java.util.Scanner;

public class SimpleInterestCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the Principal amount: ");
        double principal = scanner.nextDouble();

        System.out.print("Enter the annual Rate of interest (in %): ");
        double rate = scanner.nextDouble();
        System.out.print("Enter the Time period (in years): ");
        double time = scanner.nextDouble();

        double simpleInterest = (principal * rate * time) / 100;

        double totalAmount = principal + simpleInterest;

        System.out.println("\n--- Results ---");
        System.out.printf("Simple Interest: %.2f\n", simpleInterest);
        System.out.printf("Total Amount: %.2f\n", totalAmount);

        scanner.close();
    }
}
