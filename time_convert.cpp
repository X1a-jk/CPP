#include <iostream>
using namespace std;
int main(){
    long number;
    cout<<"Enter the number of seconds:"<<endl;
    cin>>number;
    int days=number/86400;
    int hours=(number-days*86400)/3600;
    int minutes=(number-days*86400-hours*3600)/60;
    int seconds=number-days*86400-hours*3600-minutes*60;
    cout<<number<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds";
    return 0;
 
}