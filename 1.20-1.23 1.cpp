#include <iostream>

using namespace std; 

int main(){
	
	int a[10];
	int i,j,temp;
	
	cout<<"input 10 numbers :"<<endl;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<endl;
	
	for(i=1;i<10;i++){
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
    return 0;

}
