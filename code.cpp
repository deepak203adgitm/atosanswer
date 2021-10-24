#include <iostream>
using namespace std;
#include <bits/stdc++.h>

string next(int n, string s)
{
    string prev =s;
        next_permutation(s.begin(),s.end());
  
    if(s>prev)
    return s;
    
    return "";
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
	cout<<next(n-1,s);
	return 0;
}