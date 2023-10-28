package javacodingQuestions;
import java.util.*;
public class Coins {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter number: ");
		int num=sc.nextInt();
		int one=0;
		int two=0;
		int five=(num-4)/5;
		if((num-5*five)%2==0){
		one =2;	
		} else {
			one=1;
		}
		two =(num-5*five-one)/2;
		System.out.println(one+two+five);
		System.out.println(five);//1
		System.out.println(two);//3
		System.out.println(one);//2
	}

}
//input 13 
//output
//6
//1
//3
//2

