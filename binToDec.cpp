#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(n!=0){
        int bit=n%10;
        if(bit==1){
            sum=bit*pow(2,i)+sum;


        }
        i++;
        n=n/10;
    }
    cout<<sum;
}
