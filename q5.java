import java.util.*;

public class q5 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n;
        fun(11);
        fun(14);
        // fun(1);
        // fun(2);
        // fun(10);
        // fun(15);
    }    


    public static void fun(int n)
    {
        if(n <= 0)
            return;

        int ans = 0, term = n;
        if(n % 2 == 1)
        {
            term = (n + 1)/2;
            ans = 2*(term-1);
            System.out.println(ans);
        }
        else{
        term = (n)/2;
        ans = term-1;
        System.out.println(ans);
        }
    }
}