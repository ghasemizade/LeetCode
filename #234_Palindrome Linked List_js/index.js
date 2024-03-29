// Leetcode problem algorithm signly linked list

var isPalindrome = function(head) {
    let slow = head;
    let fast = head;
    let stack = [];

    while (fast && fast.next){
        stack.push(slow.val);
        slow = slow.next;
        fast = fast.next.next;
    }

    if(fast){
        slow = slow.next;
    }
    while(slow){
        if(stack.pop() !== slow.val){
            return false;
        }
        slow = slow.next;
    }
    return true;
};