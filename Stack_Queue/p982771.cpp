// Problem:  Reverse First K elements of Queue
// Platform: Code360
// Difficulty: Easy
// Link: https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771
// Topics: Stack for reversing & Queue for inserting
/*
You are given a QUEUE containing ‘N’ integers and an integer ‘K’. You need to reverse the order of the first ‘K’ elements of the queue, leaving the other elements in the same relative order.

You can only use the standard operations of the QUEUE STL:

1. enqueue(x) : Adds an item x to rear of the queue
2. dequeue() : Removes an item from front of the queue
3. size() : Returns number of elements in the queue.
4. front() : Finds the front element.
For Example:
Let the given queue be { 1, 2, 3, 4, 5 } and K be 3.
You need to reverse the first K integers of Queue which are 1, 2, and 3.
Thus, the final response will be { 3, 2, 1, 4, 5 }.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= N <= 10 ^ 5
0 <= K <= N
-10 ^ 9 <= queue elements <= 10 ^ 9

  Time limit: 1 sec
Sample Input 1:
2
5 3
1 2 3 4 5
4 2
6 2 4 1
Sample Output 1:
3 2 1 4 5
2 6 4 1
Explanation:
For test case 1: Refer to the example explained above.

For test case 2:
The queue after reversing the first 2 elements i.e., 6 and 2 will be { 2, 6, 4, 1 }.
Sample Input 2:
2
5 2
5 3 2 6 4
4 4
1 2 3 4
Sample Output 2:
3 5 2 6 4
4 3 2 1
*/



#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    queue<int> q2; stack<int> st;

    // Inserting the k values in stack
    int minNm = min(k, (int)q.size());
    for(int i = 0; i < minNm; i++) {
        st.push(q.front());
        q.pop();
    }

    // Inserting remaining values
    while(!st.empty()) {
        q2.push(st.top());
        st.pop();
    }
    while(q.size() > 0) {
        q2.push(q.front());
        q.pop();
    }

    return q2;
}