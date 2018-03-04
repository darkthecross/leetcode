class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        i = 0
        nums1[:] = nums1[:m]
        nums2[:] = nums2[:n]
        for j in range(n):
            while i<len(nums1) and nums1[i]<nums2[j]:
                i = i+1
            nums1.insert(i, nums2[j])
            i = i+1
            #print(nums1)
        nums1[:] = nums1[:(m+n)]
