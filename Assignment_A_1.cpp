#include<iostream>
using namespace std;

int main(){
    int n=8,a[]={1,2,0,4,3,0,5,0},i=0,j=0;
    for(i=0;i<n;i++){
       
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
  
}