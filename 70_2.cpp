#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<<"   ---������10������---"<<endl;
	for(int i=0;i<10;i++){
		cout<<"�������"<<i+1<<"������"<<endl;
		cin>>a[i]; 
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9-i;j++){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	cout<<"---���ڽ��з������---"<<endl;
	for(int i=0;i<10;i++){
		cout<<"��"<<i+1<<"������:"<<a[i]<<endl;
	}
}
