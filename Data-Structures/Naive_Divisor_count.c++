//Naive solve: O(sqrt(n))


#include <bits/stdc++.h>
using namespace std;

void div_count(int n){
	int count =0;
	for(int i=1; i<= sqrt(n); i++){
		if(n%i ==0){
			if(n/i==i){count++;}
			else{count += 2;}
		}
	}
	cout<<count<<"\n";
}

int main() {
	int n;
	cin>>n;
	div_count(n);
}


