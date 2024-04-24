// #include<iostream>
// using namespace std;
// 
// int main(){
	// int a,b,c;
	// cin>>a>>b>>c;
	// if(a>b && a>c){
		// cout<<a<<" is the Largest number";
	// }
	// else if(b>a && b>c){
		// cout<<b<<" is the Largest  number ";
	// }
	// else{
		// cout<<c<<" is the Largest number ";
	// }
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
	// int a,b;
	// cout<<"Enter the value of a and b ";
	// cin>>a>>b;
	// int temp=a;
	// a=b;
	// b=temp;
	// cout<<"after swapping val "<<a<<" "<<b;
// }
// 
// #include<iostream>
// using namespace std;
// 
// int main(){
	// int a,b;
	// cout<<"Enter val of a and b ";
	// cin>>a>>b;
	// a=a+b;
	// b=a-b;
	// a=a-b;
	// cout<<"After swapping val "<<a<<" "<<b;
// }

#include<iostream>
using namespace std;

int main(){
	int t,r,rev;
	cin>>t;
	while(t>0){
		r=r%10;
		t=t/10;
		r=r*10+t;
		// cout<<r<<endl;
	}
	cout<<r<<endl;
}