class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        
        listeven=[]
        listodd=[]
        for i in range(0,len(nums)):
            if nums[i]%2==0:
                listeven.append(nums[i])
            else:
                listodd.append(nums[i])
        nums.clear()
        j=0
        while j<len(listeven):
            nums.append(listeven[j])
            nums.append(listodd[j])
            j=j+1
        return nums
        
