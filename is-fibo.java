import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) 
       {
		List<BigDecimal> l = new ArrayList<BigDecimal>();
		
		BigDecimal b5 = new BigDecimal("5");
		BigDecimal b4 = new BigDecimal("4");
		
		Scanner reader = new Scanner(System.in);
		int i = reader.nextInt();
		
		for (int j = 0; j < i; j++) {
			BigDecimal k = reader.nextBigDecimal();
			l.add(k);
		}
		
		reader.close();
		
		for (BigDecimal b : l) {
			if(sqrt(b.multiply(b5).multiply(b).add(b4)) == 1 || (sqrt(b.multiply(b5).multiply(b).subtract(b4)) == 1) ) 
				System.out.println("IsFibo");
			else
				System.out.println("IsNotFibo");
		}
		
	}
	
	public static int sqrt(BigDecimal value) {
	    BigDecimal x = new BigDecimal(Math.sqrt(value.doubleValue()));
	    BigDecimal y = new BigDecimal(x.multiply(x).toBigInteger());
	    
	    if(x.multiply(x).compareTo(y) == 0)
	    	return 1;
	    else
	    
	    return 0;
	}
}
