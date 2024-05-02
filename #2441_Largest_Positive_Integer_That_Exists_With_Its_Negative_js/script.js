/**
 * @param {number[]} nums
 * @return {number}
 */

var findMaxK = function(nums) {
    let numSet = new Set(nums)
    return Math.max(...nums.filter(num => numSet.has(-num)), -1)
};