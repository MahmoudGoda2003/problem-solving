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
	    int n=scan.nextInt();int m=scan.nextInt();boolean x=true;
	    for(int i=0;i<n;i++){
	        if(i%2==1){
	            if(x){
	                System.out.println(".".repeat(m-1)+"#");
	            }else{
	               System.out.println("#"+".".repeat(m-1)); 
	            }
	            
	            x=!x;
	        }else{
	            System.out.println("#".repeat(m));
	        }
	        
	        
	        
	    }
	    
	    
	    
	    
	    
	}
}



