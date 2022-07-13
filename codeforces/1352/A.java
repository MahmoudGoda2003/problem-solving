import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		
		for (int i = 0; i < t; i++){
		    List<Integer> l = new LinkedList<Integer>();
		    int num = sc.nextInt();
		    int count = 0;
		    
		    while (num > 0){
		        l.add(num%10);
		        if(num%10 != 0)
		            count++;
		        num /= 10;
		        
		    }
		    
		    System.out.println(count);
		    for(int j = l.size() - 1; j >= 0; j--){
		        if (l.get(j) != 0)
		            System.out.print(l.get(j) * (int)Math.pow(10, j) + " ");
		    }
		    System.out.println();
		}
	}
}