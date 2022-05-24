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
	    Scanner scan =new Scanner(System.in);
	    String str=scan.nextLine();int l=0,u=0;
	    for(int i=0;i<str.length();i++){
	        if(Character.isLowerCase(str.charAt(i))){
	            l++;
	        }else{
	            u++;
	        }
	    }
	    if(u>l){
	        System.out.println(str.toUpperCase());
	    }else{
	        System.out.println(str.toLowerCase());
	    }
	    
	}
}
