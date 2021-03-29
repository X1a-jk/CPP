#include<iostream>
using namespace std;

double add(double x,double y);
double calculate(double (*func)(double x, double y),double x, double y);

int main(){
    cout<<"entre 2 doubles:";
    double x,y;
    cin>>x>>y;
    double sum=calculate(add,x,y);
    cout<<endl<<"result is:"<<sum<<endl;
    return 0;
}

double add(double x,double y){
    return x+y;
}

double calculate(double (*func)(double x, double y),double x, double y){
    return func(x,y);
}