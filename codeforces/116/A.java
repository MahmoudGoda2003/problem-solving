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
	    int result=0,max=0;
		int n=Integer.parseInt(scan.nextLine());
		String[][] str=new String[n][2] ;
		for(int i=0;i<n;i++){
		   str[i]=scan.nextLine().split(" ");
		}
		for(int i=0;i<n;i++){
		    result+=Integer.parseInt(str[i][1])-Integer.parseInt(str[i][0]);
		    if(result>max){
		        max=result;
		    }
		}
		
		System.out.println(max);
	}
}
