#include<iostream>
using namespace std;

int main(){
    int n;
    std::cin >> n;//taking input of number of test cases
    int Hdvsr=0;
    for(int i=1;i<11;i++){   //checking divisior between 1 to 10
        if(n%i==0){
            Hdvsr=i;
        }
    }
    cout<<Hdvsr;
    return 0;
}