#include<iostream>

using namespace std;

int main()
{
    int sirky = 0;
    int delsirky = 0;
    int hrac1 = 0;
    bool hra = true;
    
    cout<<"Hra se sirkami, kolik sirek bude na stole?";
    cin>>sirky;
    if (sirky > 1 && sirky < 5){
        cout<<"Dobre, na stole budou "<<sirky<<" sirky";
    }
    else{
        cout<<"Dobre, na stole bude "<<sirky<<" sirek";
    }
    
    while(hra = true){    
        if(hrac1 < 1) {
            cout<<"\nHraje hrac 1";
            cin>>delsirky;
            if (delsirky > sirky){
                cout << "Nemuzes odebrat vic sirek, nez je na stole!";
            }
            else{
                sirky = sirky - delsirky;
                hrac1 = hrac1 + 1;
                cout<<"Na stole zbyva "<<sirky<<" sirek"<<endl;
                //cout<<hrac1<<endl;
            }
        }
        
        else {
            cout<<"\nHraje hrac 2";
            cin>>delsirky;
            if (delsirky > sirky){
                cout << "Nemuzes odebrat vic sirek, nez je na stole!";
            }
            else{
                sirky = sirky - delsirky;
                hrac1 = hrac1 - 1;
                cout<<"Na stole zbyva "<<sirky<<" sirek"<<endl;
                //cout<<hrac1<<endl;
            }
        }
        
        if (sirky <= 0){
            cout<<"\nKonec hry, na stole je 0 sirek";
            return 0;
        }
    }
    
    return 0;
}
