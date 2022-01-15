#include<iostream>
using namespace std;

int main(){
    
    int n,N,changes;
    int R[3],G[3],B[3];

    cin>>n;
   
   for(int i=0;i<n;i++){
        cin>>N;

        cin>>R[0]>>R[1]>>R[2];
        cin>>G[0]>>G[1]>>G[2];
        cin>>B[0]>>B[1]>>B[2];

        changes=R[1]+R[2]+G[2];

        cout<<changes<<endl;
    }
    return 0;
}