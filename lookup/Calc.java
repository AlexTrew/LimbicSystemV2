import java.util.Scanner;
import java.util.InputMismatchException;
import java.lang.Math;


public class Calc
{

	Scanner reader = new Scanner(System.in);  // Reading from System.in

	private void lookup(double _5ht, double xIn)
	{
		double result = (1 - Math.pow(Math.exp(-xIn/_5ht),_5ht));
		
		System.out.printf("%f\n",result);
	
	}

	public void readInput()
	{
		
		for(;;)
		{
			try{
			System.out.println("Enter a 5ht value: ");
			double a = reader.nextDouble(); 
			System.out.println("Enter a Xinput value");
			double b = reader.nextDouble();
			lookup(a,b);
			}catch(InputMismatchException e)
				{
						System.out.printf("error in input type\n");	
						break;

				}
				
		}
		

	}

}
