1class Solution(object):
2    def twoSum(self, numbers, target):
3        """
4        :type numbers: List[int]
5        :type target: int
6        :rtype: List[int]
7        """
8
9        l=0
10        n=len(numbers)
11        r=n-1
12        while l<r:
13            sum=numbers[l]+numbers[r]
14            if sum==target:
15                return [l+1,r+1]
16            elif sum>target:
17                r-=1
18            else:
19                l+=1
20
21        return []        