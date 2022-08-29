#include<iostream>
using namespace std;
int main(){
	int arr[3];
	int temp=0;
	cout<<"Enter three numbers : "<<endl;
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
		if(arr[i]<arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j]=temp;
		}
	}
	}
	cout<<"Descending Order : ";
	for(int i=0;i<3;i++){
		cout<<arr[i]<<",";
	}
}
