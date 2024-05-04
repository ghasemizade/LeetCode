/**
 * @param {number[]} nums
 * @return {boolean}
 */
var hasTrailingZeros = function(nums) {
    let evenNum = 0;

    nums.forEach(num => {
        num % 2 == 0 ? evenNum++ : 0
    })
    return evenNum > 1
};