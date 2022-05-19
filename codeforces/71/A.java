
// Online IDE - Code Editor, Compiler, Interpreter
import java.util.*;
public class Main
{
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       int n=Integer.parseInt(scan.nextLine());
       String[] str=new String[n];
       
       for(int i=0;i<n;i++){
           str[i]=scan.nextLine();
           }
           for(int i=0;i<n;i++){
                if(str[i].length()<=10){
               System.out.println(str[i]);
           }else{
                System.out.printf("%c%d%c\n",str[i].charAt(0),(str[i].length()-2),str[i].charAt(str[i].length()-1));
           }
       }
       
    }
}
