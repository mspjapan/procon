#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t,n,times;
	string s;
	vector<char> card[100];
	cin >> t;
	while(t){
		t--;
		times = 0;
		cin >> n;
		//vectorクリアする
		for(int i=0;i<n;i++){
			card[i].clear();
		}
		//vectorに値を入力する
		for(int j=0;j<n;j++){
			cin >> s;
			for(int k=0;k<s.size();k++){
				card[j].push_back(s[k]);
			}
		}
		int give=0,recieve=1,cnt=0;
		while(true){
			char temp = card[recieve][0];
			if(cnt>=10000){
				cnt = -1;
				break;
			}
			card[recieve].erase(card[recieve].begin());
			vector<char>::iterator ite;
			ite = find(card[give].begin(),card[give].end(),temp);
			if(ite!=card[give].end())
				card[give].erase(ite);
			else
				card[give].push_back(temp);
			cnt++;
			give=(give+1)%n;
			while(card[give].empty())
				give=(give+1)%n;
			recieve=(give+1)%n;
			while(card[recieve].empty())
				recieve=(recieve+1)%n;

			int remain = 0;
			for(int i=0;i<n;i++){
				if(card[i].empty())
					remain++;
			}
			if(n-remain<=1)break;
		}
		cout << cnt << endl;
	}
}