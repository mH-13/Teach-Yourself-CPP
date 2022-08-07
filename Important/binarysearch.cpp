#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void binary_search(int n, vector<int> & v){
    int l = v.size();
    int low = 0;
    int hi = l-1;
    bool found = false;
    while(low<=hi){
        int mid = (low+hi) /2;
        if(v[mid]==n){
            cout<<"Found. The element is in "<<mid<<"th position in sorted vector."<<endl;
            found = true;
            break;
        }
        else if(v[mid]<n){
            low = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    if(!found){
        cout<<"The element is not in the Vector. Search elsewhere you dumb.\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int n,f;
    cout<<"Enter the size of the vector & then enter those value: "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout<<"Enter the element you want to search: "<<endl;
    cin>>f;
    binary_search(f, v);
    return 0;
}