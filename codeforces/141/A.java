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
	   char[] str=(scan.nextLine()+scan.nextLine()).toCharArray();
	   char[]  st=scan.nextLine().toCharArray();
	   Arrays.sort(str);
	  Arrays.sort(st);
	   if( new String(str).equals(new String(st))){
	       System.out.println("YES");
	   }else{
	       System.out.println("NO");
	   }
	}
}



