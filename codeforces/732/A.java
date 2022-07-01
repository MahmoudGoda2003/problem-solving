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
	   int n=scan.nextInt();int x=scan.nextInt();
	   int i=1;
	   while (true){
	       if(((i*n)%10)-x==0||(i*n)%10==0){
	           System.out.println(i);break;
	       }i++;
	   }
	
	}
}




