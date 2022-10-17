#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
int n; 
cin>>n;
int sum = 0;
unordered_map<int , int> nums(n);
for(int i=0; i<n; ++i){\
int x; 
cin>>x;
sum += x;
nums[x]++;
}
int avg = sum / n;
cout<<"Average element is :"<<avg<<" and it's count is :\n";
cout<<nums[avg]<<"\n";
}
