
// Online IDE - Code Editor, Compiler, Interpreter
import java.util.*;
public class Main
{
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       String s=scan.nextLine();
       String[] str=s.split(" ");
       
       System.out.println((Integer.parseInt(str[0])*Integer.parseInt(str[1]))/2);
     
}
}