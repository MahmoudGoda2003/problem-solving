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
	    int n=scan.nextInt();scan.nextLine();int result=0;
	    for(int i=0;i<n;i++){
	    int x=Math.abs(scan.nextInt()-scan.nextInt());scan.nextLine();result=0;
	    result=x/10;
	    if(x%10!=0){
	        result++;
	    }
	    System.out.println(result);
	            
	        }
	        
	        
	        
	        
	    
	}
}




