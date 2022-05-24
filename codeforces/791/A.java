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
	    Scanner scan =new Scanner(System.in);
	    String str =scan.nextLine();
	    String [] st=str.split(" ");
	    int x=Integer.parseInt(st[0]);
	    int y=Integer.parseInt(st[1]);
	    int counter=0;
	    while(x<=y){
	        x*=3;
	        y*=2;
	        counter++;
	    }
	    System.out.println(counter);
	    
	    
	    
	}
}
