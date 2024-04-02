// Another series sum from 1 to 15  
// 1,1/4, -1/9, 1/16, -1/25, ...
public class SumOfSeries {
    public static void main(String[] args) {
        int n = 15; // Number of terms in the series
        double sum = 0;

        // Using a loop to calculate the sum of the series
        for (int i = 1; i <= n; i++) {
            double term = (i % 2 == 0) ? -(1.0 / (i * i)) : (1.0 / (i * i));
            sum += term;
        }

        System.out.println("Sum of the series is: " + sum);
    }
}
