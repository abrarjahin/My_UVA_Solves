/*
	UVa 12372 - Packing for Holiday
*/
#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
	{
        int L,W,H;
        cin>>L>>W>>H;
        if(L<=20&&W<=20&&H<=20)
            cout<<"Case "<<i+1<<": good"<<endl;
        else
            cout<<"Case "<<i+1<<": bad"<<endl;
        }
    return 0;
    }