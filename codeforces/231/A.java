
// Online IDE - Code Editor, Compiler, Interpreter
import java.util.*;
public class Main
{
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       int n=Integer.parseInt(scan.nextLine());int counter=0;String[] str=new String[n];
       for(int i=0;i<n;i++){
           str[i]=scan.nextLine();
           if(str[i].charAt(0)=='1'&&(str[i].charAt(2)=='1'||str[i].charAt(4)=='1')){
               counter++;
           }else if(str[i].charAt(2)=='1'&&(str[i].charAt(0)=='1'||str[i].charAt(4)=='1')){
               counter++;
           }else if(str[i].charAt(4)=='1'&&(str[i].charAt(2)=='1'||str[i].charAt(0)=='1')){
               counter++;
           }
       }
 System.out.println(counter);
        
}
}