#include <bits/stdc++.h>
using namespace std;

int div_count(int n){
	int count =0;
	for(int i=1; i<= sqrt(n); i++){
		if(n%i ==0){
			if(n/i==i){count++;}
			else{count += 2;}
		}
	}
	return count;
}

int main() {
	int n;
	cin>>n;
	int odd_cnt =0;
	for(int i =1;  i<=n; i++){
		int a = div_count(i);
		if(a%2 !=0){odd_cnt++;}
	}
	cout<<odd_cnt<<"\n";
}
