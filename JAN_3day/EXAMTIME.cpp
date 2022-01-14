/*

/- n test cases 
dragon -> DSA ,TOC ,DM
sloth  -> DSA ,TOC ,DM

total more - rank up

total & DSA tie - TOC up

everything tie - rank same

*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int DSA_d,DSA_s, TOC_d,TOC_s, DM_d ,DM_s ;
    int total_dragon , total_sloth;


    for(int i=0; i<n;i++){
        cin>> DSA_d >> TOC_d >> DM_d ;

        cin>> DSA_s >> TOC_s >> DM_s ;
        
        total_dragon = DSA_d + TOC_d + DM_d;
        total_sloth  = DSA_s + TOC_s + DM_s;

        if (total_dragon != total_sloth){
            if (total_dragon > total_sloth){    //rank by total 
                cout<<"DRAGON"<<endl;
            }
            else{
                cout<<"SLOTH"<<endl;
            }
        }

        else{
            if(DSA_d != DSA_s){
                if(DSA_d > DSA_s){
                    cout<<"DRAGON"<<endl;           // rank by DSA
                }
                else{
                    cout<<"SLOTH"<<endl;
                }
            }
            else{
                if(TOC_d > TOC_s){                  // rank by TOC
                    cout<<"DRAGON"<<endl;
                }
                else if(TOC_d < TOC_s) {
                    cout<<"SLOTH"<<endl;
                }
                else{
                    cout<<"TIE"<<endl;              // TIE
                }
            }
        }
    }
    return 0;
}
