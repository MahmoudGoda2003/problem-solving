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
	int n=Integer.parseInt(scan.nextLine());String[][] str=new String [n][2];int result=0;
	for(int i=0;i<n;i++){
	    str[i]=scan.nextLine().split(" ");
	    if(Integer.parseInt((str[i][0]))<=Integer.parseInt((str[i][1]))-2){
	        result++;
	    }
	}
	
	
	System.out.println(result);
	
	}
}

