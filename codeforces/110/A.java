/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
	    long x=scan.nextLong();
	    int counter=0;
	    while(x!=0){
	        if(x%10==7||x%10==4){
	            counter++;
	        }
	        x/=10;
	    }
	    if(counter>9){
	        while(counter!=0){
	        if(counter!=7||counter!=4){
	           System.out.println("NO");return;
	          }
	          counter/=10;
	        }
	        System.out.println("YES");
	    }else if(counter==7||counter==4){
	        System.out.println("YES");
	    }else{
	        System.out.println("NO");
	    }
	    
	    
	    
	    
	    
		
	}
}
