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
	   int n=scan.nextInt();scan.nextLine();int x=0;int m=0;int counter=0;
	   for(int i=0;i<n;i++){
	       x=scan.nextInt();counter=0;
	      for(int j=1;j<4;j++){
	          m=scan.nextInt();
	          if(m>x){
	              counter++;
	          }
	      } 
	       scan.nextLine();
	       System.out.println(counter);
	       
	       
	       
	       
	   }
	   
	   
	   
	}
}




