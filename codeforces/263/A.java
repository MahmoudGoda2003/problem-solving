
// Online IDE - Code Editor, Compiler, Interpreter
import java.util.*;
public class Main
{
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       String[] str=new String[5];String [][]st=new String [5][5];
       for(int i=0;i<5;i++){
           str[i]=scan.nextLine();
           st[i]=str[i].split(" ");
           }
       
       for(int i=0;i<5;i++){
           for(int j=0;j<5;j++){
               if(st[i][j].equals("1")){
                   System.out.println(Math.abs(i-2)+Math.abs(j-2));
                   return;
               }
           }
       }
       
       
       

     
}
}