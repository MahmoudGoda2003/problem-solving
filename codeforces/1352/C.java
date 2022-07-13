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
	  int x=scan.nextInt();scan.nextLine();
	  for(int i=0;i<x;i++){
	      int n=scan.nextInt();int k=scan.nextInt();
	 if((k+k/(n-1))%n==0){
	     System.out.println(k/(n-1)+k-1);
	 }else{
	     
	     System.out.println(k/(n-1)+k);
	 }
	       
	  }
	    
	    
	    
	    
	    
	    
	    
	    
	}}




