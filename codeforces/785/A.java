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
	    Scanner scan=new Scanner(System.in);int result=0;
	   int n=scan.nextInt();scan.nextLine();
	   for(int i=0;i<n;i++){
	       String str=scan.nextLine();
	       switch(str){
	           case "Tetrahedron" : result+=4;break;
	           case "Cube":result+=6;break;
	           case "Octahedron":result+=8;break;
	           case "Dodecahedron":result+=12;break;
	           case "Icosahedron":result+=20;break;
	           default:break;
	       }
	       
	       
	       
	       
	   }
	   System.out.println(result);
	   
	   
	   
	  
	             
	}
}



