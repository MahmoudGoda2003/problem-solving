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
	   int counter=0;
	   scan.nextLine();
	   String[] str=scan.nextLine().split(" ");int min=Integer.parseInt(str[0]);int max=Integer.parseInt(str[0]);
	   for(int i=1;i<str.length;i++){
	      
	           if(Integer.parseInt(str[i])>max){
	               max=Integer.parseInt(str[i]);counter++;
	           }else if(Integer.parseInt(str[i])<min){
	               min=Integer.parseInt(str[i]);counter++;
	           }
	       
	   }
	        System.out.println(counter);
	        
	        
	   
	    
	    
	}
}




