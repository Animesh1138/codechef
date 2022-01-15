#include<iostream>
using namespace std;

int main(){
    
    int n,N,change_1,change_2,swap;
    int R1,R2,R0,G1,G2,G0,B1,B2,B0;

    cin>>n;
   
   for(int i=0;i<n;i++){
        cin>>N;

        cin>>R0>>R1>>R2;
        cin>>G0>>G1>>G2;
        cin>>B0>>B1>>B2;

        change_1=R1+R2+G2;
        change_2=G0+B0+B1;
        swap=max(change_1,change_2);

        cout<<sawp<<endl;
    }
    return 0;
}