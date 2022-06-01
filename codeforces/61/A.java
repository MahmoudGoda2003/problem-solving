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
	String[] str1=scan.nextLine().split("");
	String[] str2=scan.nextLine().split("");
	String[] result=new String[str1.length];
	for(int i=0;i<str1.length;i++){
	    if(Integer.parseInt(str1[i])!=Integer.parseInt(str2[i])){
	        result[i]="1";
	    }else{
	        result[i]="0";
	    }
	}
	
	System.out.println(String.join("",result));
	
	}
}


