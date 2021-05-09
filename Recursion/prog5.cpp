#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&stk,int elem)
{
	if(stk.size()==0)
	{
		stk.push(elem);
		return;
	}

	int x = stk.top();
	stk.pop();
	insert(stk,elem);
	stk.push(x);
	return;
}

void reverseStack(stack<int>&stk)
{
	if(stk.size()==1)
		return;

	int temp = stk.top();
	stk.pop();
	reverseStack(stk);
	insert(stk,temp);
	return;

}

int main()
{
	stack<int> stk;

	stk.push(3);stk.push(5);stk.push(9);stk.push(4);stk.push(6);stk.push(-13);
		
	reverseStack(stk);
	cout<<"\n"<<"After Reverse: ";
	while(!stk.empty())
	{
		cout<<stk.top()<<" ";
		stk.pop();

	}
	return 0;

}

// 5	1
// 8	9
// 9	8
// 1	5


// 8	1
// 9	9
// 1	8