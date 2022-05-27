/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere i world.

******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	int n=Integer.parseInt(scan.nextLine());
	String[] str=new String[n];
	for(int i=0;i<n;i++){
	    str[i]=scan.nextLine();
	}
	int result=0;
	for(int i=0;i<n-1;i++){
	    if(str[i].charAt(0)!=str[i+1].charAt(0)){
	        result++;
	    }
	}
	

	    System.out.println(result+1);
	
	
	
	}
}

