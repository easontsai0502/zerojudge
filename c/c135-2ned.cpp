#include<iostream>
#include<string>
using namespace std;
int num(char num,int s,int lin,int ed=0){
    if(ed){ed=0;}else{ed=1;}
	switch(num){
		{case('0'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('1'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){if(ed){cout<<" ";}}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('2'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('3'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('4'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){if(ed){cout<<" ";}}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('5'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('6'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('7'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){if(ed){cout<<" ";}}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('8'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){cout<<" ";}
					break;
				}
			}
			break;
		}
		{case('9'):
			switch(lin){
				{case(1):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(2):
					cout<<"|";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(3):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					cout<<" ";
					break;
				}
				{case(4):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<" ";}
					cout<<"|";
					break;
				}
				{case(5):
					cout<<" ";
					for(int i=0;i<s;i++){cout<<"-";}
					if(ed){
					    cout<<" ";
        				cout<<".";//debug
					}
					break;
				}
			}
			break;
		}
	}
	cout<<" ";
	return 0;
}

int main(){
	int s,rr=0;
	while(cin>>s){
		if(rr){
			cout<<"\n\n";
		}
		rr=1;
		string n;
		cin>>n;
		int len=n.length();
		for(int i=0;i<len;i++){
			if(i==len-1){
				num(n[i],s,1,1);
				cout<<".";//debug
			}
			else{num(n[i],s,1);}
		}
		cout<<"\n";
		for(int j=0;j<s;j++){
			for(int i=0;i<len;i++){
				if(i==len-1){
					num(n[i],s,2,1);
				cout<<".";//debug
				}
				else{num(n[i],s,2);}
			}
			cout<<"\n";
		}
		for(int i=0;i<len;i++){
			if(i==len-1){
				num(n[i],s,3,1);
				cout<<".";//debug
			}
			else{num(n[i],s,3);}
		}
		cout<<"\n";
		for(int j=0;j<s;j++){
			for(int i=0;i<len;i++){
				if(i==len-1){
					num(n[i],s,4,1);
				cout<<".";//debug
				}
				else{num(n[i],s,4);}
			}
			cout<<"\n";
		}
		for(int i=0;i<len;i++){
			if(i==len-1){
				num(n[i],s,5,1);
				cout<<".";//debug
			}
			else{num(n[i],s,5);}
		}
	}
	return 0;
}