#include<bits/stdc++.h>
using namespace std;

//Delete middele element of stack using Recursion.

void findMiddleElement(stack<int>&stk , int mid)
{

	if(mid == 1)
	{
		stk.pop();
		return;
	}
	int x = stk.top();
	stk.pop();
	findMiddleElement(stk,mid-1);
	stk.push(x);
	return;


}


int main()
{
	stack<int> stk;

	stk.push(3);stk.push(5);stk.push(9);stk.push(4);stk.push(6);stk.push(-13);
	int k = stk.size()/2 + 1;

	findMiddleElement(stk,k);

	while(!stk.empty())
	{
		cout<<stk.top()<<" ";
		stk.pop();

	}



}