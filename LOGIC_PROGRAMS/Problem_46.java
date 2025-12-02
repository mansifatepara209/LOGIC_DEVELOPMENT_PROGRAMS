public class Problem_46 {
    public static void main(String[] args) {
        int n = 10;
        int ans = 0;
        for(int i = 0 ; i<=n;i++){
            if(i*i <= n){
                ans = i;
            }
        }
        System.out.println(ans);
    }
}