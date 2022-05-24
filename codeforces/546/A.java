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
	    Scanner scan =new Scanner(System.in);
	    String str =scan.nextLine();
	    String [] st=str.split(" ");
	    int x=Integer.parseInt(st[0]);
	    int y=Integer.parseInt(st[1]);
	    int z=Integer.parseInt(st[2]);
	    for(int i=1;i<=z;i++){
	        y-=i*x;
	    }
	    
	    if(y>0){
	        System.out.println(0);
	    }else{
	    
	    System.out.println(Math.abs(y));
	    }
	    
	}
}
