/*You can get 20% in this code.*/
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	unsigned long long int n,l;
	cin>>n>>l;
	map<unsigned long long int,unsigned long long int> cutlist;
	for(unsigned long long int i=0;i<n;i++){
		unsigned long long int x,ii;
		cin>>x>>ii;
		cutlist[ii]=x;
	}
	set<unsigned long long int> loglist;
	loglist.insert(0);
	loglist.insert(l);
	unsigned long long int prize=0;
	for(unsigned long long int i=1;i<=n;i++){
		loglist.insert(cutlist[i]);
		set<unsigned long long int>::iterator it=loglist.lower_bound(cutlist[i]);
		prize+=*next(it)-*prev(it);
		
	}
	cout<<prize;
	return 0;
}


/*

input1
[3 7
2 2
3 1
5 3]
output1
[14]
*/