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
	scan.nextLine();double result=0;
	String[]str=scan.nextLine().split(" ");
	for (int i=0;i<str.length;i++){
	    result+=Integer.parseInt(str[i]);
	}
	
	System.out.println(result/str.length);
	
	}
}


