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
	      if(k>n){
	          System.out.println("NO");
	      }else if(k==n){
	          System.out.println("YES");
	          for(int j=0;j<k;j++){
	              System.out.print(1+" " );System.out.println();
	          }
	          
	      }else if(n%2!=0&&k%2==0){
	          System.out.println("NO");
	      }else if(n%2!=0&&k%2!=0){
	          System.out.println("YES");
	          for(int j=0;j<k-1;j++){
	              System.out.print(1+" ");
	          }
	          System.out.println(n-k+1);
	      }else if(n%2==0&&k%2==0){
	          System.out.println("YES");
	          for(int j=0;j<k-1;j++){
	              System.out.print(1+" ");
	          }
	          System.out.println(n-k+1);
	      }else{
	          if(n<2*k){
	              System.out.println("NO");
	          }else{
	              System.out.println("YES");
	              for(int j=0;j<k-1;j++){
	              System.out.print(2+" ");
	          }
	          System.out.println(n-(2*k)+2);
	          }
	      }
	      
	      
	      
	  }
}}




