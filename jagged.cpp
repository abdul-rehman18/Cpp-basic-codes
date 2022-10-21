#include<iostream>
using namespace std;
int main(){
	int rows=0;
	cout<<"Enter number of rows : ";
	cin>>rows;
	int *number = new int[rows];
	int **arrays = new int*[rows];
	for(int i=0;i<rows;i++){
		cout<<"Enter number of columns for Row = "<<i+1<<endl;
		cout<<"Input : ";
		cin>>number[i];
		arrays[i] = new int[number[i]];
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<number[i];j++){
			cout<<"Enter elements of columns = "<<j+1<<" for Row = "<<i+1<<endl;
			cin>>arrays[i][j];
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<number[i];j++){
			cout<<arrays[i][j]<<" ";
		}
		cout<<endl;
	}
}
