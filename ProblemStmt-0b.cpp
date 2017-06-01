#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n,i,j,k;
	cin>>n;
	long long a[n],c[n],d[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		c[i]=a[i];
		d[i]=c[i];//d[i] is the original 
	}
	int q;
	cin>>q;
	int b[q];
	for(i=0;i<q;i++)
		cin>>b[i];
	/*cout<<"Shoba"<<endl;
	 //possibility 1(if the exact length is present,give it to the  customer, else do not give him anything(sample i/o logic says so)
	for(j=0;j<q;j++){
		for(i=0;i<n;i++){
			if(b[j]==a[i]){
				a[i]=0;
				i=n+3;
			}
		}
		if(i!=(n+4))
			cout<<"-1";
		else{
			for(i=0;i<n;i++)
				 cout<<a[i]<<"\t";
		}
		cout<<endl;
	}*/
	for(i=0;i<n;i++)
		a[i]=d[i];
  //possibility 2-difference in logic between problem statement and sample i/o
	cout<<"Shoba"<<endl;
	//possibility 2(problem statement-start from the top , keep reducing as you find)
	for(j=0;j<q;j++){
		for(i=0;i<n;i++){
			if(b[j]<=a[n-i-1]){
				a[n-i-1]=a[n-i-1]-b[j];
				i=n+3;
			}
		}
		if(i!=n+4){
			cout<<"-1";
		}
		else
		{
			for(i=0;i<n;i++)
				cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
  
	for(i=0;i<n;i++)
		a[i]=d[i];
	cout<<"Kamal"<<endl;
	for(j=0;j<q;j++){
		for(i=0;i<n;i++)
			c[i]=a[i];
		sort(c,c+n);
		for(i=0;i<n;i++){
			if(b[j]==c[i]){
				k=c[i];
				i=n+3;
			}
			if((i<(n-1))&&(i!=(n+3))){
				if((b[j]>c[i])&&(b[j]<c[i+1])){
					k=c[i+1];
					i=n+3;
				}
			}
		}
		if(i!=n+4){
			cout<<"-1";
		}
		else
		{
			for(i=0;i<n;i++){
				if(k==a[i])
					a[i]=k-b[j];
			}
			for(i=0;i<n;i++)
				cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
  
	for(i=0;i<n;i++)
		a[i]=d[i];
	cout<<"Jasmine"<<endl;
	for(j=0;j<q;j++){
		for(i=0;i<n;i++)
			c[i]=a[i];
		sort(c,c+n);
		for(i=0;i<n;i++){
			if(c[n-i-1]>=b[j]){
				k=c[n-i-1];
				i=n+3;
			}
		}
		if(i!=n+4){
			cout<<"-1";
		}
		else{
			for(i=0;i<n;i++){
				if(k==a[i])
					a[i]=k-b[j];
			}
			for(i=0;i<n;i++)
				cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
}
