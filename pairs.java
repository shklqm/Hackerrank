
import java.util.HashMap;
import java.util.Scanner;

public class Solution {
    static int pairs(HashMap<Integer, Integer> allNumbers, int array[], int k) {
      /* Complete this function */
    	int res = 0;
    	
    	for (int key_in_array : array) 
    	{
    		if (allNumbers.get(key_in_array+k) != null) 
    			res++;
			
    		if (allNumbers.get(key_in_array-k) != null) 
    			res++;
    		    		
    		allNumbers.remove(key_in_array);
    	}
		    	
        return res;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
              
        String n = in.nextLine();
        String[] n_split = n.split(" ");
        
        int _a_size = Integer.parseInt(n_split[0]);
        int _k = Integer.parseInt(n_split[1]);
        
        int[] _a = new int[_a_size];
        int _a_item;
        String next = in.nextLine();
        String[] next_split = next.split(" ");
        
        HashMap<Integer, Integer> allNumbers = new HashMap<>();
        
        for(int _a_i = 0; _a_i < _a_size; _a_i++)
        {
        	_a_item = Integer.parseInt(next_split[_a_i]);
            _a[_a_i] = _a_item;
            allNumbers.put(_a_item, 0);
        }
                
        System.out.println(pairs(allNumbers,_a, _k));
        in.close();
    }
}
