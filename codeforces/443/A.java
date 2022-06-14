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
	    String[] str=scan.nextLine().replaceAll("[^a-zA-Z0-9]","").split("") ;
	    Arrays.sort(str);int counter=0;
	    for(int i=0;i<str.length-1;i++){
	        if(!str[i].equals(str[i+1])){
	            counter++;
	        }
	    }if(str[0].isEmpty()){
	        System.out.println(0);
	    }else{
	System.out.println(counter+1);
	}}
}



