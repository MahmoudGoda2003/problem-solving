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
		String str=scan.nextLine();
		String[] st=str.split("\\+");
		Arrays.sort(st);
		for(int i=0;i<st.length-1;i++){
		    System.out.print(st[i]);
		    System.out.print("+");
		}
		System.out.print(st[st.length-1]);
	}
}
