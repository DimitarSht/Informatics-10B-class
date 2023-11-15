#include<iostream>
#include<string>
using namespace std;

struct student{
    string ime;
    int nomer;
    double uspeh;

};
int maxsize=99;
struct vipusk{
    struct student arr[maxsize];
    double uspeh;
};
int main(){
    int n;
    double srUspeh,sbor=0;
    cin>>n;
    struct student arr[n];
    struct vipusk klasove[3];
    for(int j=0;j<3;j++)
    for(int i=0;i<n;i++){
        cin>>arr[i].ime;
        cin>>arr[i].nomer;
        cin>>arr[i].uspeh;
        sbor=sbor+arr[i].uspeh;
    }
    srUspeh=sbor/n;
    cout<<srUspeh<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i].ime<<" ";
        cout<<arr[i].nomer<<" ";
        cout<<arr[i].uspeh<<" ";
        cout<<endl;
    }
return 0;
}
