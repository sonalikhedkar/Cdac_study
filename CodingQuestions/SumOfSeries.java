//code share screen  sum of series from 1 to 15 1,1/4, 1/9, 1/16, 1/25..
//You want to calculate the sum of the series where each term is the reciprocal of the square of its position in the series.
//Here's the Java code to compute the sum:
public class SumOfSeries {
    public static void main(String[] args) {
        int n = 5; // Number of terms in the series
        double sum = 0;

        // Using a loop to calculate the sum of the series
        for (int i = 1; i <= n; i++) {
            double term = 1.0 / (i * i);
            sum += term;
        }

        System.out.println("Sum of the series is: " + sum);
    }
}
