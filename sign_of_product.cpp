/*There is a function signFunc(x) that returns:
	1 if x is positive.
	-1 if x is negative.
	0 if x is equal to 0.
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int negative = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==0) return 0;
            else if(nums[i]<0){
                negative++;
            }
        }
         if(negative%2==0) return 1;
        else return -1;
    
    }
};
int main(){
	int a=0,m;
	vector<int> num;
	cout<<"Enter size : ";
	cin>>m;
	cout<<endl;
	cout<<"Enter desired input : ";
	for(int i=0;i<m;i++){
	cin>>a;
	num.push_back(a);
    }
    cout<<"Entered Array is = [";
    for(int i=0;i<m;i++){
	cout<<num[i]<<",";
    }
    cout<<"]"<<endl;
	Solution n;
	cout<<endl;
	cout<<"*****************************************"<<endl;
	cout<<"Sign of Product of required array is = "<<n.arraySign(num)<<endl;
	cout<<"*****************************************"<<endl;
}
