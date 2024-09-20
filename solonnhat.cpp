#include<iostream>

using namespace std;

int main(){
int a,b,c,d;

cout<<"nhap 4 so: ";
cin>>a>>b>>c>>d;

if (a>b&&a>c&&a>d){
cout<<"so lon nhat"<<a;}

else if(b>a&&b>c&&b>d){
cout<<"so lon nhat"<<b;}

else if(c>a&&c>b&&c>d){
cout<<"so lon nhat"<<c;}

else {
cout<<"so lon nhat"<<d;}

return 0;
}
	

