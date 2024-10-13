#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        vector<int> v;
        int count = 0, pow = 1;

        while(x > 0){
            if(x % 10 > 0){
                v.push_back(x % 10 * pow);
                count++;
            }
            x /= 10;
            pow *= 10;
        }
        cout << count << endl;
        for(int val : v){
            cout << val << " ";
        }
        cout << endl;
    }
    
}