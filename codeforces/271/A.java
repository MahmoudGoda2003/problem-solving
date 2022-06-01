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
	int n=scan.nextInt();String str="";
	while(true){
	    n++;
	    str=Integer.toString(n);
	    if(str.charAt(0)!=str.charAt(1)&&str.charAt(0)!=str.charAt(2)&&str.charAt(0)!=str.charAt(3)&&str.charAt(1)!=str.charAt(2)&&str.charAt(1)!=str.charAt(3)&&str.charAt(2)!=str.charAt(3)){
	        
	        System.out.println(n);return;
	    }
	}
}


}