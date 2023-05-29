#include<iostream>

using namespace std;

int main()
{
    int sirky = 24;
    int delsirky = 0;
    int hrac1 = 0;
    bool hra = true;
    
    cout<<"Hra se sirkami, na stole je 24 sirek, napis kolik chces odecist";
    
    while(hra = true){    
        if(hrac1 < 1) {
            cout<<"\nHraje hrac 1";
            cin>>delsirky;
            sirky = sirky - delsirky;
            hrac1 = hrac1 + 1;
            cout<<"Na stole zbyva "<<sirky<<" sirek"<<endl;
            //cout<<hrac1<<endl;
        }
        
        else {
            cout<<"\nHraje hrac 2";
            cin>>delsirky;
            sirky = sirky - delsirky;
            hrac1 = hrac1 - 1;
            cout<<"Na stole zbyva "<<sirky<<" sirek"<<endl;
            //cout<<hrac1<<endl;
        }
        
        if (sirky <= 0){
            cout<<"\nKonec hry, na stole je 0 sirek";
            return 0;
        }
    }
    
    return 0;
}
