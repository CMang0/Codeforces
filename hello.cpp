#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        pair<int,int> p;
        cin >> p.first >> p.second;
        v.push_back(p); 
    }

    int count = 0;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            if(i!=j && v[i].first == v[j].second){
                count++;
            }
        }
    }
    cout << count;
}