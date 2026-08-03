package Starter226;

import java.util.*;
import java.lang.*;
import java.io.*;

public class Codechef{
    static void q3(){   
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while(T-- >  0 ) {
            int N = sc.nextInt();

            int[] arr = new int[N];
            for(int i = 0; i < N; i++) {
                arr[i] = sc.nextInt();
            }
            int res = solve1(arr);
            System.out.println(res);
        }
        
    }
    
    static int solve1(int[] arr) {
        int n = arr.length;
        int max = Arrays.stream(arr).max().getAsInt();
        for (int i = 0; i < n; i++){
            while(arr[i] * 2 <= arr[max]) arr[i] *= 2;
        }
        int ans = ans = arr[n - 1] - arr[0];
        for (int i = 0; i < n; i++) { 
            ans = Math.min(ans, 2 * arr[i] - arr[(i + 1) % n]);
        }
        return ans;
    }
    
	public static void main (String[] args) throws java.lang.Exception
    {
        q3();
	}
}
