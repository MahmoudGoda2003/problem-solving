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
		String str1=scan.nextLine().toLowerCase();
		String str2=scan.nextLine().toLowerCase();
		for(int i=0;i<str1.length();i++){
		    if(str1.charAt(i)!=str2.charAt(i)){
		       	if(str1.charAt(i)==str2.charAt(i)){
		    System.out.println(0);
		}else if(str1.charAt(i)>str2.charAt(i)){
		    System.out.println(1);
		}else{
		    System.out.println(-1);
		}
		return;
		    }
		}
		System.out.println(0);
	
	}
}
