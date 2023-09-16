#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int test;
    cin>>test;
    float result[test];
    for(int i=0;i<test;i++){
        result[i]=0.0;
    }
    for(int i=0;i<test;i++){
        int sub;
        cin>>sub;
        float sum=0.0;
        for(int j=0;j<sub;j++){
            float g;
            cin>>g;
            sum+=g;
        }
        result[i]=sum/sub;
    }
    for(int i=0;i<test;i++){
        cout<<"Case "<<i+1<<": "<<(round(result[i]*1000.0)/1000.0)<<endl;
    }
    return 0;
}
