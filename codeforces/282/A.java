
// Online IDE - Code Editor, Compiler, Interpreter
import java.util.*;
public class Main
{
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       int n=Integer.parseInt(scan.nextLine());int result=0;String[] str=new String[n];
       for(int i=0;i<n;i++){
           str[i]=scan.nextLine();
           if(str[i].charAt(0)=='+'||str[i].charAt(1)=='+'){
               result++;
           }else{
               result--;
           }
       }
       
       System.out.println(result);
     
}
}