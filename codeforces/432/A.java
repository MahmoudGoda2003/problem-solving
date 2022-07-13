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
	  int n=scan.nextInt();int k=scan.nextInt();
	 int x=0;int result=0;int team=0;
	  for(int i=0;i<n;i++){
	      x=scan.nextInt();
	      if(5-(k+x)>=0){
	          team++;
	      }
	      
	      
	      
	      if(team==3){
	          team=0;result++;
	      }
	      
	      
	  }
	 
	      System.out.println(result);
	  
	  }
	    
	}





