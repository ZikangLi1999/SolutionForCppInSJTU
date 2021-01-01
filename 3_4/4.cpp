#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3;
	cout<<"x1,y1:"<<endl;
	cin>>x1>>y1;
	cout<<"x2,y2:"<<endl;
	cin>>x2>>y2;
	cout<<"x3,y3:"<<endl;	
	cin>>x3>>y3;
	//(x1-x2)/(y1-y2)==(x2-x3)/(y2-y3)
	//(x1-x2)*(y2-y3)==(x2-x3)*(y1-y2)
	if(fabs((x1-x2)*(y2-y3)-(x2-x3)*(y1-y2))<1e-6){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
} 
