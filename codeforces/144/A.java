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
	    int n=scan.nextInt();scan.nextLine();int[] arr=new int[n];int max=0,min=1000000000,x=0,y=0;
	    for(int i=0;i<n;i++){
	         arr[i]=scan.nextInt();
	        if(arr[i]>max){
	            max=arr[i];
	            x=i;
	        } if(arr[i]<=min){
	            min=arr[i];
	            y=i;
	        }
	        
	    }
	   
	    if(x>y){
	System.out.println(x+n-y-2);
}
else{
	System.out.println(x+n-y-1);

}
	    
	    
	
	}
}



