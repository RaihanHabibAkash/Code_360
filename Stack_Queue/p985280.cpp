// Problem:  Max Stack
// Platform: Code360
// Difficulty: Easy
// Link: https://www.naukri.com/code360/problems/max-stack_985280
// Topics: 2 Stack, one normal & one Max stack

/*
You have to implement a special data structure “MAX_STACK” it would be a hybrid data structure of max heap and stack. Basically, it will have all the functionality of a stack in addition to it the max stack should also give max element in a stack in O(1). you have to implement the following functions:

specialPush(value): should push the value in the stack in O(1).
specialPop( ) : should pop the last element from the stack in O(1).
specialTop( ): should give the element at the top of the stack in O(1).
specialMax( ): should give the maximum element from all the elements that are currently present in the stack in O(1).
In addition it tries to construct it only using the stack data structure.

Four types of queries denote these operations:

Type 1 : for specialPush(value) operation.
Type 2 : for specialPop( ) operation.
Type 3 : for specialTop( ) operation.
Type 4 : for specialMax( ) operation.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
10
1 5
1 4
1 6
1 1
3
4
2
2
3
4
Sample Output 1 :
1
6
4
5
Explanation for Sample Input 1 :
Initialising the new stack : MaxStack Stack = new MaxStack().
Then each operation is performed as shown below. 
Stack.specialPush(5)         // stack = [5]
Stack.specialPush(4)         // stack = [5,4]
Stack.specialPush(6)         // stack = [5,4,6]
Stack.specialPush(1)         // stack = [5,4,6,1]
Stack.specialTop()           // returns 1, stack = [5,4,6,1]
Stack.specialMax()           // returns 6, stack = [5,4,6,1]
Stack.specialPop()           // stack = [5,4,6]
Stack.specialPop()           // stack = [5,4]
Stack.specialTop()           // returns 4, stack = [5,4]
Stack.specialMax()           // returns 5, stack = [5,4]
Sample Input 2 :
10
1 8         
1 7         
1 13       
1 10       
4            
2            
4            
2            
4
3
Sample Output 2 :
13
13
8
7
Explanation of Sample Input 2 :
Initialising the new stack : MaxStack Stack = new MaxStack().
Then each operation is performed as shown below. 
Stack.specialPush(8)           // stack = [8]
Stack.specialPush(7)           // stack = [8,7]
Stack.specialPush(13)          // stack = [8,7,13]
Stack.specialPush(10)          // stack = [8,7,13,10]
Stack.specialMax()             // returns 13, stack = [8,7,13,10]
Stack.specialPop()             // stack = [8,7,13]
Stack.specialMax()             // return 13, stack = [8,7,13]
Stack.specialPop()             // stack = [8,7]
Stack.specialMax()             // returns 8, stack = [8,7]
Stack.specialTop()             // returns 7, stack = [8,7]
*/



#include <stack>
using namespace std;

class MaxStack {
public:    	
	stack<int> st; stack<int> maxSt;
	MaxStack() {
		
	}
	
	void specialPush(int value) {
		st.push(value);

		if(maxSt.empty()) maxSt.push(value);
		else {
			if(maxSt.top() <= value) maxSt.push(value);
		}
	}

	int specialPop() {
		if(st.empty()) return -1;

		int val = st.top();
		st.pop();

		if(val == maxSt.top()) maxSt.pop();

		return val;		
	}

	int specialTop() {
		if(st.empty()) return -1;

		return st.top();
	}

	int specialMax() {
		if(st.empty()) return -1;

		return maxSt.top();	
	}
};