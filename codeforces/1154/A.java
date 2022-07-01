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
	    Scanner scan=new Scanner(System.in);int[] arr=new int[4];
	    for(int i=0;i<4;i++){
	        arr[i]=scan.nextInt();
	    }          
	   Arrays.sort(arr);
	  System.out.printf("%d %d %d", arr[3]-arr[0],arr[3]-arr[1],arr[3]-arr[2]);
	   
	   
	   
	   
	}
}




