#include<iostream>

using namespace std;

int main(){
	cout<<"Please enter n,m:"<<endl;
	int n,m;
	cin>>n>>m;
	if(m<2*n||m>4*n||m%2!=0){
		cout<<"No solution."<<endl;
	}else{
		cout<<"Chicken:"<<2*n-m/2<<",Rabbit:"<<m/2-n<<endl;
	}
	return 0;
} 
