#include<iostream>
#include<algorithm>
using namespace std;
int main(){
float arr[]={33.2,12,1.1,333.98,45.7,999.9};
float n=sizeof(arr)/sizeof(arr[0]);
cout<<"original array\n";
for( float i=0;i<n;i++){
	cout<<arr[(int)i]<<endl;
}
for(float i=0;i<n-1;i++){
	for(float j=0;j<n-i-1;j++){
		if(arr[(int)j]>arr[(int)j+1]){
			swap(arr[(int)j],arr[(int)j+1]);
		}
	}
}
cout<<"sorted array"<<endl;
for(float i=0;i<n;i++){
	cout<<arr[(int)i]<<"  "<<endl;
}
system("pause");
	return 0;
}