#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void alpha(char a){
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
	
	if(a>='a'&&a<='z'){
		a-=32;
	}
	else{
		a+=32;
	}
	
}
	cout<<a<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		char a; cin>>a;
		alpha(a);
	}
	
}
