class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n=len(nums)
        list1=[]
        for i in range(n):
            for j in range(i+1,n):
                target=-(nums[i]+nums[j])
                if  target in nums[j+1:]:
                    triplet=[nums[i],nums[j],target]
                    if triplet not in list1:
                        list1.append(triplet)
        return list1


        