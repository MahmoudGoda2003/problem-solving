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
		String str=scan.nextLine();int x=0;
	     
		for(int i=1;i<str.length()-1;){
		    if(str.charAt(i)==str.charAt(i+1)||str.charAt(i)==str.charAt(i-1)){
		        x++;
		    str= str.substring(0,i)+str.substring(i+1);
		    }else{
		        i++;
		    }
		}
	if(str.length()==2&&str.charAt(0)==str.charAt(1)){x++;}
		
		
		System.out.println(x);
		
	}
}
