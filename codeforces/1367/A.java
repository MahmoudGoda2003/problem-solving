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
	  int n=scan.nextInt();scan.nextLine();
	  for(int i=0;i<n;i++){
	      String []str=scan.nextLine().split("");
	      for(int j=1;j<str.length-1;j++){
	         if(j<str.length-2&&str[j].equals(str[j+1])&&str[j].equals(str[j+2])){
	             str[j]="";j++;
	         }else if(str[j].equals(str[j+1])){
	              str[j]="";
	          }
	      }
	      
	       System.out.println(String.join("",str));
	  }
	 
	  
	  
	  }
	    
	}





