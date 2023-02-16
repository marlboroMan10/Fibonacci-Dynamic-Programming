#include <iostream>
using namespace std;
#define MAX 100
int Solutions[MAX]={0,1};
int CountOfCalls = 0;
long int f(int a){
    if(a==0)
        return 0;
    if(Solutions[a])
        return Solutions[a];
    CountOfCalls++;
    return (Solutions[a] = f(a-1) + f(a-2));
}

int main(){
    cout<<f(40)<<endl;
    cout<<"Count of calls : "<<CountOfCalls<<endl;//39 :)
    return 0;
}
