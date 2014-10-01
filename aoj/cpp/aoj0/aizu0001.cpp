#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int height[100];
int main(){
    for(int i=0;i<10;i++)
        cin >> height[i];
    sort(height,height+10,greater<int>());
    for(int i=0;i<3;i++)
        cout << height[i] << endl;
}