#include <iostream>

using namespace std;

int main()
{
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    if(n>1){



        for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
        else{
            cout<<"prime number";
            break;
        }
        }
        if(n==2){
            cout<<"prime number";
        }




    }
    else{
        cout<<"not prime";
    }

}
