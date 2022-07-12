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
	    int n=scan.nextInt();scan.nextLine();int result=2;
	    for(int i=0;i<n;i++){
	        scan.nextLine(); result=2;
	        String[] str=scan.nextLine().split("");
	        Arrays.sort(str);
	        for(int j=0;j<str.length-1;j++){
	            if(!str[j].equals(str[j+1])){
	                result+=2;
	            }else{
	                result++;
	            }
	        }
	        System.out.println(result);
	        
	    }
	}
}




