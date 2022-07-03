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
	    int n=scan.nextInt();scan.nextLine();boolean flag=true;
	    for(int i=0;i<n;i++){
	        int m=scan.nextInt();scan.nextLine();
	        int [] arr=new int[m];
	        for(int j=0;j<m;j++){
	            arr[j]=scan.nextInt();
	        }scan.nextLine();Arrays.sort(arr);flag=true;
	        
	        
	        for(int j=0;j<m-1;j++){
	        
	           if((arr[j+1]-arr[j])!=1&&(arr[j+1]-arr[j])!=0){
	               System.out.println("No");flag=false;break;
	           }
	        }
	        if(flag==true){
	            System.out.println("YES");
	        }
	        
	        
	        
	    }
	        
	        
	        
	}
}




