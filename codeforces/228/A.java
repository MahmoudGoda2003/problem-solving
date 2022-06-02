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
	    String []str=scan.nextLine().split(" ");int result=0;
	    for(int i=0;i<4;i++){
	        for(int j=i+1;j<4;j++){
	            if(str[i].equals(str[j])){
	                str[j]=Integer.toString(-j);
	                result++;
	               
	            }
	            
	        }
	    }
	    System.out.println(result);
	
	}
}



