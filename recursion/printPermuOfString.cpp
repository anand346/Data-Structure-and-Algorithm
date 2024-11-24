#include<bits/stdc++.h>
using namespace std;

void printPermu(string &str, unordered_set<string> &st, int i){
	if(i == str.length()){
		st.insert(str);
		return;
	}

	for(int j = i; j < str.length(); j++){
		swap(str[j], str[i]);
		printPermu(str, st, i+1);
		swap(str[j], str[i]);
	}
}

int main(){
	string str = "ABB";
	unordered_set<string> st;
	printPermu(str, st, 0);
	vector<string> ans(st.begin(), st.end());

	for(int i = 0; i < ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}