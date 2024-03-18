#include<bits/stdc++.h>
using namespace std;

// for input
vector<int> input(int n) {
 vector<int> temp(n);
for(int i=0;i<n;i++)
cin>>temp[i];
return temp;
}

// for output
void output(vector<int> a) {
 int n=a.size();
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}

// for sum of all element
long long sum(vector<int> a) {
 int n=a.size();
 long long sum=0;
for(int i=0;i<n;i++)
sum+=a[i];

return sum;
}


//main function
int main()
{
 int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> a=input(n);
output(a);
}
}