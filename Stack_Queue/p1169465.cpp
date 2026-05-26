// Problem:  Kevin’s stack problem
// Platform: Code360
// Difficulty: Easy
// Link: https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465
// Topics: Stack for reversing string

/*
Kevin has recently learned the concept of “STACK”. During his practice, he got stuck in a problem where he has to reverse a string ‘S’ using a stack. So, he appoints you to help him in reversing the string ‘S’. All you have to do is to find the reversed string.

Please reverse the string using a stack so that Kevin gets to know where he is getting wrong after seeing your solution. It is guaranteed that strings will only be composed of English alphabets.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= |S| <= 10^4

Time limit: 1 sec
Sample Input 1:
2
CODINGNINJAS
WelcomeToCodeStudio  
Sample Output 1:
SAJNINGNIDOC
oidutSedoCoTemocleW
Explanation of sample input 1:
In the first test case, the reverse of the given string is “SAJNINGNIDOC”.

In the second test case, the reverse of the given string is “oidutSedoCoTemocleW”.
Sample Input 2:
3
A
Aa
aA
Sample Output 2:
A
aA
Aa
Explanation for sample input 2:
In the first test case, the reverse of the given string is “A”.

In the second test case, the reverse of the given string is “aA”.

In the third test case, the reverse of the given string is “Aa”.
*/


#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{	
	// Inserting chars in stack
	stack<char> st;
	for(int i = 0; i < s.size(); i++) st.push(s[i]);

	// Reversing
	for(int i = 0; i < s.size(); i++) {
		s[i] = st.top();
		st.pop();
	}

	return s;
}