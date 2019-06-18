import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();

        long ans=0;
        for(int i=0;i<str.length();i++){
            if(toInt(str.substring(i, i+1))%4==0)
                ans++;
            if(i>0 && toInt(str.substring(i-1,i+1))%4==0)
                ans+=(i);
        }
        System.out.println(ans);
    }

    public static int toInt(String str){
        return Integer.parseInt(str);
    }
}