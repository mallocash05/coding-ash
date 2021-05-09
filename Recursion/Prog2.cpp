#include<bits/stdc++.h>
using namespace std;

// SORT ARRAY using Recusion 


void insert(vector<int>&arr,int elem)
{
	if(arr.size() == 0 || arr[arr.size()-1] <= elem)
	{
		arr.push_back(elem);
		return;
	}

	int x = arr[arr.size()-1];
	arr.pop_back();
	insert(arr,elem);
	arr.push_back(x);
	return;
}

void sortArray(vector<int>&arr)
{
	if(arr.size() == 1)
		return;

	int temp = arr[arr.size()-1];
	arr.pop_back();

	sortArray(arr);

	insert(arr,temp);
	return;
}



int main()
{

	vector<int> arr = {10,-1,7,25,5};

	sortArray(arr);
	for(auto i:arr)
		cout<<i<<" ";
	cout<<"\n";

}