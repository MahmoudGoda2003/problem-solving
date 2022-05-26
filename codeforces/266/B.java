/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	scan.nextInt();
	int n=scan.nextInt();scan.nextLine();
	String[] str=scan.nextLine().split("");
	for(int i=0;i<n;i++){
	    for(int j=0;j<str.length-1;j++){
	        if(str[j].equals("B")&&str[j+1].equals("G")){
	            str[j]="G";
	            str[j+1]="B";j++;
	        }
	        
	    }
	}
	System.out.println(String.join("",str));
	
	}
}

