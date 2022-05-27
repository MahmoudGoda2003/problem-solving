/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere i world.

******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	scan.nextLine();
	String str=scan.nextLine();
    int d=0,a=0;
    for(int i=0;i<str.length();i++){
          if(str.charAt(i)=='D'){
              d++;
          }else{
              a++;
          }
     }
     if(d>a){
         System.out.println("Danik");
     }else if(a>d){
         System.out.println("Anton");
     }else{
         System.out.println("Friendship");
     }
	}
}

