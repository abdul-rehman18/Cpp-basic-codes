#include<iostream>
using namespace std;
int main()
{
	int arr[5][5]={{2,3,1,5,0},{7,1,5,3,1},{2,5,7,8,1},{0,1,5,0,1},{3,4,9,1,5}};
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	int a=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i<=j){
				cout<<arr[i][j]<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		a++;
		cout<<endl;
	}
	
}
