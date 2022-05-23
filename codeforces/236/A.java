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
		String str=scan.nextLine();int x=0;
	     for(int i=0;i<str.length();i++){
	         boolean flag=true;
	         for(int j=i+1;j<str.length();j++){
	             if(str.charAt(i)==str.charAt(j)){
	                 flag=false;
	             }
	         }
	         if(flag){
	             x++;
	         }
	     }
		
		
		
		
		
		
		if(x%2==0){
		    System.out.print("CHAT WITH HER!");
		    
		}else{
		    System.out.print("IGNORE HIM!");
		}
		
		
		
		
		
		
		
		
		
		
	}
}
