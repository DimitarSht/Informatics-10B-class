#include<iostream>
using namespace std;
int main(){
    int a[4];
    bool prov=true;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    if(a[1]==2&&a[2]%4!=0){
        if(a[0]>28){
            prov = false;
        }

    }
    if(a[1]==2&&a[2]%4==0){
        if(a[0]>29){
            prov=false;
        }
    }
    if(a[1]%2!=0){
        if(a[0]>31){
            prov=false;
        }
    }else if(a[1]!=2){
        if(a[0]>30){
            prov=false;
        }
    }
    cout<<prov;
return 0;
}
