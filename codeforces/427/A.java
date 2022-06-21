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
	    int c=0;int p =0;
	    scan.nextLine();
	    String[] str=scan.nextLine().split(" ");
	    for(int i=0;i<str.length;i++){
	        if(!str[i].equals("-1")){
	            p+=Integer.parseInt(str[i]);
	        }else{
	            c++;
	            if(p!=0){
	                c--;p--;
	            }
	        }
	    }
	System.out.println(c);
	}
}



