/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
    public static boolean isprime(int x){
        for(int i=2;i<=Math.sqrt(x);i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    
    
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	  int x=scan.nextInt();
	     for(int i=1;i<x;i++){
	         if(!isprime(i)&&!isprime(x-i)){
	             System.out.printf("%d %d", i,x-i);break;
	         }
	     }
	  }
	    
	    
	    
	    
	    
	    
	    
	    
	}




