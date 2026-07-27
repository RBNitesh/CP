import java.util.*;

public class Main{
	static void print(Object o){
		System.out.println(o);
	}

	static int compute(long k, long[] c){
		int lo = 0, hi = c.length-1;
		int ans = -1;

		while(lo <= hi){
			int mid = lo + (hi - lo)/2;

			if(c[mid] >= k){
				ans = mid;
				hi = mid - 1;
			}
			else lo = mid + 1;
		}
		return ans;
	}

	static void solve(int[] arr, long[] queries){
		int n = arr.length;
		int max = 0;
		for(int it : arr){
			max = Math.max(max, it);
		}

		long[] c = new long[max+1];

		for(int num : arr){
			for(int i = 1; i <= Math.sqrt(num); ++i){
				if(num % i == 0){
					c[i]++;
					if(i * i != num) c[num/i]++;
				}
			}
		}

		for(int i = max; i >= 1; --i){
			c[i] = c[i] * (c[i] - 1) / 2;
			
			for(int j = 2*i; j <= max; j += i){
				c[i] -= c[j];
			}
		}

		for(int i = 2; i <= max; ++i)
			c[i] += c[i-1];

		for(long q : queries){
			print(compute(q+1, c));
		}
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		print("Enter n and q: ");
		int n = in.nextInt();
		int q = in.nextInt();

		int[] arr = new int[n];
		long[] queries = new long[q];

		print("Enter the elements of arr: ");
		for(int i = 0; i < n; ++i)
			arr[i] = in.nextInt();
		
		print("Enter the elements of queries: ");
		for(int i = 0; i < q;++i)
			queries[i] = in.nextLong();
		

		solve(arr, queries);
	}
}
