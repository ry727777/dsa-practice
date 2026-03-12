package Binary_search;
import java.util.Scanner;

public class Closert_right {

    public static int Closet_right(int[] arr, int key){
        int closet = arr.length + 1;
        int l=0, r = arr.length-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(arr[mid] >= key){
                closet = mid + 1;
                r = mid - 1;
            }else{
               l = mid + 1;
            }
        }
        return closet;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        int[] ans = new int[k];

        int i=0;
        while(k > 0){
            int ele = sc.nextInt();
            int res = Closet_right(arr, ele);
            ans[i++] = res;
            k--;
        }

        for(int ele : ans){
            System.out.println(ele);
        }
    }
}
