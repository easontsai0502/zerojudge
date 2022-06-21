#include<iostream>
#include<vector>		//vector
#include<algorithm>
using namespace std;
int main(){
	int a[7]={1,2,3,4,5,6,7};
	vector<int> vec(20,0);		//初始值為20個0，若沒給0自動設為0
	vector<int> vec_2{1,2,3};	//初始值為{1,2,3}
	vector<int>::iterator vec_it;//宣告一個vector的迭代器
	for(it=vec_it.begin();vec_it!=vec.end(),vec_it++){//vec.begin為vec的第一個，vec.end為vec最後一個的下一個，vec_it++代表跳下一個
		cout<<*vec_it<<"\n";//列印該資料(vec_it為指標變數)
	}
}


/*
list<type> name						list 一個name
list<type>::iterator name			list蝶帶氣
vec.push_back						(元素)新增元素到最後面
vec.pop_back()						刪除最後一個元素
vector<int> vec(位置,位置)			初始值為位置到位置
vec.empty()							檢測是否為空，若是則true
vec.insert(插入位置,起始位置,末位)	插入起始位置~末位到插入位置		a,a,^差,插入位置,a,a
vec.insert(插入位置,資料)			插入資料到插入位置
vec.erase(起始位置[,末位])			刪除起始位置到[,末位](如果有)
list.remove(資料(5))					刪除指定資料(例如5，就刪除是5的元素)
list.front()							第零個資料
list.back()							最後一個的資料
merge(a,b,[c,d,......]list)							合併資料:a~b[和c~d]加到list
list.reverse()						反置資料
map<type_a,type,b>					建立字典 key type為type_a,value type為type_b
*map.first							回傳key值
*map.second							回傳value值
map_iterator=map.find("key")		找出"key"值的位置
map.erase(map_iterator)				刪除該值
map.erase("key")				刪除該值
map.count("key")				回傳(key)為"key"的個數
search(a,b,c,d)					查找a~b是否有c~d		(abcd type可為vector,list......)


set
set<類型> 變數名				建立set(備註，set可自動排序)
set.insert(插入值)				插入一個值(會自動排序)
set.lower_bound(尋找值)			尋找該值位置(指標)(類似.find)，若有多項相同則回傳第一項，若無該值則回傳清單大小(set.size())
next(set指標)					回傳該指標的下一個值
prev(set指標)					回傳該指標的下一個值


queue


priority_queue<int,vector<int>,greater<int>> vec;	建立一個queue，但小的始終最上面
priority_queue <int,vector<int>,less<int> >q;		建立一個queue，但大的始終最上面


*/

