#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a=0,b=0,xmin=5,xmax=1;
        for(int i=0;i<n;i++){
            cin>>b;
            if(i){
                xmax=max(xmax,int(max(a,b)-min(a,b)));
                xmin=min(xmin,int(max(a,b)-min(a,b)));

            }
            a=b;
        }

        if(xmin<1 || xmax>(n-1)){cout<<"Not jolly\n";}
        else{cout<<"Jolly\n";}
    }
    return 0;
}

