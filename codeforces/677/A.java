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
	scan.nextInt();
	int n=scan.nextInt();scan.nextLine();
	String[] str=scan.nextLine().split(" ");int result=str.length;
	for(int i=0;i<str.length;i++){
	    if(Integer.parseInt(str[i])>n){
	        result++;
	    }
	}
	System.out.println(result);
	}
}

