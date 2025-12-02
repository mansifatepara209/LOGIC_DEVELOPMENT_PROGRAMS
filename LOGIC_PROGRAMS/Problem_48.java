//48
public class Problem_48 {
    public static void main(String[] args) {
        int[] nums = {1,2,0,3};
        int n = nums.length;
        int ans = (n*(n+1))/2;
        for(int i = 0;i<nums.length;i++){
            if(nums[i]>0 && nums[i]<=n){
                ans -= nums[i];
            }
            
        }
        System.out.println(ans);
    }
}