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
	     int k=scan.nextInt();scan.nextLine();
	     int l=scan.nextInt();scan.nextLine();
	     int m=scan.nextInt();scan.nextLine();
	     int n=scan.nextInt();scan.nextLine();
	     int d=scan.nextInt();scan.nextLine();int result=0;
	     
	    if (k == 1 || l == 1 || m == 1 || n == 1)
            result = d;
        else
        {
            for (int i=1; i<=d; i++)
                if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
                    result++;
        }
        System.out.println(result);
	   
	}
}



