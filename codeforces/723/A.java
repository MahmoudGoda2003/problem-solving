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
	   int []arr=new int[3];int result=100;int sum =0;
	   for(int i=0;i<3;i++){
	       arr[i]=scan.nextInt();
	   }
	    
for(int i=0;i<3;i++){
    sum =0;
    for(int j=0;j<3;j++){
        sum+=Math.abs(arr[i]-arr[j]);
    }
    if(sum<=result){
        result=sum;
    }
}	  
System.out.println(result);
	   
}}




