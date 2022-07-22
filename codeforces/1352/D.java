/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
    public static boolean isprime(int x){
        for(int i=2;i<=Math.sqrt(x);i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    
    
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	  int n=scan.nextInt();scan.nextLine();
	  for(int i=0;i<n;i++){
	      int moves =1;int a=0,b=0;boolean flag=true;
	      int m=scan.nextInt();scan.nextLine();int []arr=new int [m];int x=1,y=m-1,z=0,c=0;
	      for(int j=0;j<m;j++){
	          arr[j]=scan.nextInt();
	      }
	      z=arr[0];a=arr[0];
	      while(y>=x){
	          if(flag){
	              c=0;
	              while(c<=z&&y>=x){
	                  c+=arr[y];
	                  b+=arr[y];
	                  y--;
	              }
	              moves++;
	              z=c;
	              flag=!flag;
	              
	              
	              
	              
	          }else{
	              c=0;
	          while(c<=z&&y>=x){
	                  c+=arr[x];
	                  a+=arr[x];
	                  x++;
	              }
	              moves++;
	              z=c;
	              flag=!flag;    
	          
	          
	          
	          
	          
	              
	          }
	          
	          
	          
	              
	          }
	          
	          
	          
	      
	      
	      System.out.println(moves+" "+a+" "+b);
	      
	  }
	  
	  
	 
	  }
	    
	}






