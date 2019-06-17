import java.util.LinkedHashMap;
import java.util.Scanner;

public class Main {
    static Scanner reader = new Scanner(System.in);
    public static void main(String[] str) {
        int n=toInt(reader.nextLine());
        String temp;
        LinkedHashMap<String,Integer> db=new LinkedHashMap<>();
        while(n>0){
            temp=reader.nextLine();
            if(db.containsKey(temp)) {
                System.out.println(temp + db.get(temp)); // string + index
                db.put(temp+db.get(temp),1);             // put the new string in map (string + index)
                db.put(temp,db.get(temp)+1);             // update the first string
            }
            else
            {
                System.out.println("OK");
                db.put(temp,1);
            }
            n--;
        }
    }
    public static int toInt(String str){
        return  Integer.parseInt(str);
    }
}