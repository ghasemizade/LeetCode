// leetcode problem valid parentheses with js
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = [];

for (let i = 0; i < s.length; i++) {
    let c = s.charAt(i);

    if (c === '(' || c === '{' || c === '[') {
        stack.push(c);
    } else if (c === ')' && stack.length > 0 && stack[stack.length - 1] === '(') {
        stack.pop();
    } else if (c === '}' && stack.length > 0 && stack[stack.length - 1] === '{') {
        stack.pop();
    } else if (c === ']' && stack.length > 0 && stack[stack.length - 1] === '[') {
        stack.pop();
    } else {
        return false;
    }
}
return stack.length === 0;
};