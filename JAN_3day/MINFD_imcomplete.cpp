/*
n test cases 

N - no. of FD
X - no. of gold coins req.

array of N  .... Ai inputs ... check ... if Ao => X or Sum of how many will be X  
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;

    cin>>n;
    
    for(int i=0;i<n;i++){
        int N,X;
        cin>>N>>X;
        
        int a[N];

        for(int j=0;j<N;j++){
            cin>>a[j];
        }

        sort(a,a+N);

        int count=0;
        int sum=0;

        for(int j=0;j<N;j++){
            if(sum<X ){
                sum=sum + a[N-1-j];
                count++;
            }  
            else{
              break;
            }
        }
        if(sum<X){
            cout<<"-1"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }

    return 0;
}