class Solution:
    def transitionPoint(self, arr, n): 
        # Code here
        left=0
        right=n-1
        ans=-1
        if n==1:
            return 0 if arr[0]==1 else -1
        while left<right:
            mid=(left+right)//2
            if arr[mid]==1:
                ans=mid
                right=mid
            else:
                left+=1
        return ans
