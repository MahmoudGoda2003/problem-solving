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
		String str=scan.nextLine();
		char[] chars = str.toCharArray();
Set<Character> charSet = new LinkedHashSet<Character>();
for (char c : chars) {
    charSet.add(c);
}

StringBuilder sb = new StringBuilder();
for (Character character : charSet) {
    sb.append(character);
}

		
		
		
		
		
		
		if(sb.toString().length()%2==0){
		    System.out.print("CHAT WITH HER!");
		    
		}else{
		    System.out.print("IGNORE HIM!");
		}
		
		
		
		
		
		
		
		
		
		
	}
}
