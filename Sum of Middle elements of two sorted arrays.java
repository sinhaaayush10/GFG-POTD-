class Solution {
    public int SumofMiddleElements(int[] arr1, int[] arr2) {
        int n = arr1.length;  
        int low = 0, high = n; 

        while (low <= high) {
            int cut1 = (low + high) / 2;  
            int cut2 = n - cut1;  

            int l1 = (cut1 == 0) ? Integer.MIN_VALUE : arr1[cut1 - 1]; 
            int l2 = (cut2 == 0) ? Integer.MIN_VALUE : arr2[cut2 - 1];  
            int r1 = (cut1 == n) ? Integer.MAX_VALUE : arr1[cut1]; 
            int r2 = (cut2 == n) ? Integer.MAX_VALUE : arr2[cut2];  

         
            if (l1 <= r2 && l2 <= r1) {
                return Math.max(l1, l2) + Math.min(r1, r2);  
            } 
         
            else if (l1 > r2) {
                high = cut1 - 1;
            } 
         
            else {
                low = cut1 + 1;
            }
        }

        return 0;
    }
}
