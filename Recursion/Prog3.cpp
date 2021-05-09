#include<bits/stdc++.h>
using namespace std;

#define N 5
//SORT A STACK


void insert(stack<int>&stk,int elem)
{
	if(stk.size() == 0 || stk.top()<=elem)
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

void sortStack(stack<int>&stk)
{
	if(stk.size() == 1)
		return;

	int temp = stk.top();
	stk.pop();
	sortStack(stk);
	insert(stk,temp);
	return;

}

int main()
{
	
	stack<int>st;

	//TAKE INPUT 
	for(int i=0;i<N;i++)
	{
		int x;
		cin>>x;
		st.push(x);
	}

	sortStack(st);

	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();

	}
	cout<<"\n";

	return 0;


}