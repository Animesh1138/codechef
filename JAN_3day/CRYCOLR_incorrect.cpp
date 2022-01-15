/* 

    PROBBALY NOW ITS CORRECT 

*/


#include<iostream>
using namespace std;

int main(){
    
    int n,N,change_1,change_2;
    int R[3],G[3],B[3];

    cin>>n;
   
   for(int i=0;i<n;i++){
        cin>>N;

        cin>>R[0]>>R[1]>>R[2];
        cin>>G[0]>>G[1]>>G[2];
        cin>>B[0]>>B[1]>>B[2];

        change_1=R[1]+R[2]+G[2];
        change_2=G[0]+B[0]+B[1];
        swap=max(change_1,change_2);

        cout<<sawp<<endl;
    }
    return 0;
}
