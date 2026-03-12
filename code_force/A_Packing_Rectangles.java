import java.util.Scanner;

public class A_Packing_Rectangles{
       
       static boolean good(long x, long w, long h, long n){
          long a = x/w;
          long b = x/h;

          if(a == 0 || b == 0) return false;
        
          return a >= (n+b-1)/b;  // very important
          // have to take ceil value
          // a*b >= n -> a >= n/b  
       }
       public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long w,h,n;
        w = sc.nextLong();
        h = sc.nextLong();
        n = sc.nextLong();

        long l = 0;
        long r = Long.max(w,h)*n;
        long ans = 0;
        while(l<=r){
            long mid = (l + r) / 2;
            if(good(mid, w,h,n)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        System.out.println(ans);
    }
}