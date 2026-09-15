class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        l1=[]
        a=[]
        b=[]
        for i in nums1:
            if i not in nums2 and i not in a:
                a.append(i)
        l1.append(a)
        for i in nums2:
            if i not in nums1 and i not in b:
                b.append(i)
        l1.append(b)
        return l1

        