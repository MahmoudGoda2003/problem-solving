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
	   int x=scan.nextInt();int time=4*60-scan.nextInt();int counter=0;
	   for(int i=1;i<=x;i++){
	       if(time>=i*5){
	           time-=i*5;counter++;
	       }else{
	          break;
	       }
	   }
	        
	   
	    System.out.println(counter);
	    
	}
}



