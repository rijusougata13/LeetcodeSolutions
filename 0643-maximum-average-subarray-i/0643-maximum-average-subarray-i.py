class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        # compute sum of first window
        window_sum = sum(nums[:k])
        max_sum = window_sum

        # slide the window
        for i in range(k, len(nums)):
            window_sum += nums[i] - nums[i - k]
            if window_sum > max_sum:
                max_sum = window_sum

        # return average
        return max_sum / k