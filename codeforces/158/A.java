
// Online IDE - Code Editor, Compiler, Interpreter
import java.util.*;
public class Main
{
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       int counter=0, x;
       String sr=scan.nextLine();
       String[] s1=sr.split(" ");
       x=Integer.parseInt(s1[1]);
       String s=scan.nextLine();
       String[] str=s.split(" ");
       for(int i=0;i<str.length;i++){
           if(Integer.parseInt(str[i])>=Integer.parseInt(str[x-1])&&Integer.parseInt(str[i])!=0){
               counter++;
           }
           else {break;}
       }
       System.out.println(counter);
     
}
}