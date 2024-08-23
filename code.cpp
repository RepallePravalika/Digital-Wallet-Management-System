#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int uid,bal;
         cin>>uid>>bal;
        m[uid]=bal;
    }
    
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++) {
        int id1,id2,amt;
        cin >>id1>>id2>>amt; 
        if(m[id1]>=amt){
            m[id1]-=amt;
            m[id2]+=amt;
            cout<<"Success"<<endl;
        }
        else
            cout<<"Failure"<<endl;
    }
    cout<<endl;
    
 vector<pair<int, int>>v;
    for(const auto& it:m){
        v.push_back(it);
    }
    
 sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
     if(a.second==b.second){
         return a.first< b.first;
     }
        return a.second < b.second; 
    });

    for (const auto& it:v) {
        cout <<it.first << " " <<it.second<<endl;
    }

    return 0;
}
