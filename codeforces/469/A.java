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
	    Scanner scan=new Scanner(System.in);int x=0;
	   int n =scan.nextInt();scan.nextLine();scan.nextInt();
	   String str1=scan.nextLine();scan.nextInt();str1+=scan.nextLine();
	     String[] str2=str1.split(" ");
	     
	     Arrays.sort(str2);
	     for(int i=0;i<str2.length-1;i++){
	         if(!str2[i].equals(str2[i+1])){
	             x++;
	         }
	     }
	     if(x==n){
	         System.out.println("I become the guy.");
	     }else{
	         System.out.println("Oh, my keyboard!");
	     }
	}
}



