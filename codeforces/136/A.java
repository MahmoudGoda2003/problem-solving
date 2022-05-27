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
      scan.nextLine();
      String [] str  =scan.nextLine().split(" ");String [] ans=new String[str.length];
      for(int i=0;i<str.length;i++){
          ans[Integer.parseInt(str[i])-1]=Integer.toString(i+1);
      }
	

	System.out.println(String.join(" ",ans));
	
	}
}