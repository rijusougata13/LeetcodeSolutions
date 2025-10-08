class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        x=0
        i=0
        j=0
        ans=0
        while(j<k):
            ans+=nums[j]
            j+=1
        x=(ans*1.0)/k
        
        while(j<len(nums)):
            ans-=nums[i]
            i+=1
            ans+=nums[j]
            x=max(x,(ans*1.0/k))
            j+=1

        return x