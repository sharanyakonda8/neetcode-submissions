class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        minheap=[]
        result=[]
        for i,j in points:
            distance=i*i+j*j
            minheap.append((distance,i,j))
        heapq.heapify(minheap)
        while k>0:
            _,x,y=heapq.heappop(minheap)
            result.append((x,y))
            k-=1
        return result
        