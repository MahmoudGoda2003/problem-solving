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
	   int n=scan.nextInt();
	   int result=0;
	   while(n!=0){
	       if(n>=100){
	           result+=n/100;
	           n%=100;
	       }else if(n>=20){
	           result+=n/20;
	           n%=20;
	       }else if(n>=10){
	           result+=n/10;
	           n%=10;
	       }else if(n>=5){
	           result+=n/5;
	           n%=5;
	       }else {
	       result+=n;
	       n=0;
	       }
	       
	       
	   }
	         System.out.println(result);     
	}
}



