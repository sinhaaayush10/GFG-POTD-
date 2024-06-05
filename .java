import java.util.Arrays;

public class Solution {
    public int findSwapValues(int[] A, int n, int[] B, int m) {
        int sum1 = 0;
        int sum2 = 0;
        
       
        for (int i = 0; i < n; i++) {
            sum1 += A[i];
        }
        
      
        for (int i = 0; i < m; i++) {
            sum2 += B[i];
        }
        
    
        if (sum1 == sum2) {
            return 1;
        }
        
        // Sort both arrays
        Arrays.sort(A);
        Arrays.sort(B);
        
        int i = 0;
        int j = 0;
        
        while (i < n && j < m) {
            int val1 = sum1 - A[i] + B[j];
            int val2 = sum2 - B[j] + A[i];
            
            // Check if the new sums after swapping are equal
            if (val1 == val2) {
                return 1;
            }
            
       
            if (val1 > val2) {
                i++;
            } else {
                j++;
            }
        }
        
        // If no valid swap is found, return -1
        return -1;
    }
}
