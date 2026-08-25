class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        l=[]
        n=len(nums)/3
        for i in nums:
            count=0
            for j in nums:
                if i==j:
                    count+=1
            if count>n:
                l.append(i)
        ans=set(l)
        l2=list(ans)
        return l2
        