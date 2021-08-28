class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0
        j=len(height)-1
        ans=0
        while i<j:
            ans = max(ans,min(height[i], height[j]) * (j-i))
            if height[j]<height[i]:
                j-=1
            else:
                i+=1
        return ans
