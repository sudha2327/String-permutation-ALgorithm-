#include<iostream>
#include<algorithm>
using namespace std;

void swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void rev(int n[],int s, int l){
         
		  while(s<l){
		  	swap(n[s++],n[l--]);
		  }	
}


int main(){
	
	int n[]={1,2,7,4,5,8,3};
	int s=sizeof(n)/sizeof(n[0]);
	int x=-1;
	//find largest x
	for(int i=0;i<s;i++){
		if(n[i]<n[i+1]){
			x=i;
		}
	}
	
	//find largest y
	int y=0;
	for(int i=0;i<s;i++){
		if(n[x]<n[i]){
			y=i;
		}
	}
	
	swap(n[x],n[y]);
	
	//reverse
	
    reverse(n.begin()+x+1,n.end());
	
	
	for(int i=0;i<s;i++){
		printf("%d => ",n[i]);
	}
	
	return 0;
}
