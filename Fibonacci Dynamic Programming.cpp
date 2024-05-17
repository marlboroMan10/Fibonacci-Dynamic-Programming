#include <bits/stdc++.h>
using namespace std;
#define MAX 100
//int Solutions[MAX]={0,1};
int CountOfCalls = 0;
long int f(int a, vector<int>& dp){
    if(a==0 || a==1)
        return a;
    if(dp[a]!=-1)
        return dp[a];
    CountOfCalls++;
    return dp[a] = f(a-1, dp) + f(a-2, dp);
}

int main(){
	vector<int>dp(MAX, -1);
    cout<<f(40, dp)<<endl;
    cout<<"Count of calls : "<<CountOfCalls<<endl;
    return 0;
}
