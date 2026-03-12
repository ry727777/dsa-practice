// lower and upper bound concepts

import java.util.Scanner;
import java.util.Arrays;

public class FastSearch {

    static int lower_bound(int[] arr, int key){
        int l=0, h = arr.length-1;
        int ans = arr.length;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid] >= key){
                ans = mid;
                h = mid-1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
    static int upper_bound(int[] arr, int key){
        int l=0, h = arr.length-1;
        int ans = arr.length;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid] <= key) l = mid+1;
            else{
                ans = mid;
                h = mid-1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }  
        int k = sc.nextInt();
        int[] ans = new int[k];
        Arrays.sort(arr);
        int i = 0;
        while(k > 0){
            int l = sc.nextInt();
            int r = sc.nextInt();
            
            int lower = lower_bound(arr, l);
            int upper = upper_bound(arr, r);
            ans[i++] = upper - lower;
            k--;
        } 

        for(int ele : ans){
            System.out.print(ele + " ");
        }
    }
}
