package Binary_search;
import java.util.Scanner;

public class Closet_left{

    public static int closer_to_key(long[] arr, long key){
        int l=0, r = arr.length-1;
        int closet = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid] > key){
                r = mid-1;
            }else{
                closet = mid+1;
                l = mid+1;
            }
        }
        return closet;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer n = sc.nextInt();
        Integer k = sc.nextInt();
        long[] arr = new long[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int[] ans = new int[k];
        int i=0;
        while(k > 0){
            long key = sc.nextInt();
            int tmp = closer_to_key(arr, key);
            ans[i] = tmp;
            k--;
            i++;
        }
        for(int ele : ans){
            System.out.println(ele);
        }
    }
}