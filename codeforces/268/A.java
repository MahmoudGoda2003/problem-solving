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
	    int n=Integer.parseInt(scan.nextLine());int[]a=new int[n];int[]b=new int[n];int counter=0;
	              for(int i=0;i<n;i++){
	                  a[i]=scan.nextInt();b[i]=scan.nextInt();scan.nextLine();
	              }
	              
	   for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(a[i] == b[j]){
                counter++;
            }
        }
    }
	              
	     System.out.println(counter);         
	              
	              
	}
}



