#include<iostream>
using namespace std;
int Fill_array(double* ar,int length);
int Show_array(double* ar,int length);
int Reverse_array(double* ar,int length);

int main(){
    
    cout<<"maximum length:";
    int length;
    cin>>length;
    double array[length]={0.0};
    int n;
    n=Fill_array(array,length);
    cout<<"actual length is "<<n<<endl;
    Show_array(array,length);
    Reverse_array(array,length);
    Show_array(array,length);
    return 0;
}

int Fill_array(double* ar,int length){
    double num;
    int ac_len=0;
    while (cin>>num && ac_len<length-1){
        ar[ac_len++]=num;
    }
    return ac_len+1;
}

int Show_array(double* ar,int length){
    for (int i=0;i<length;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int Reverse_array(double* ar,int length){
    for (int i=0;i<=(length-1)/2;i++){
        double temp;
        temp=ar[i];
        ar[i]=ar[length-1-i];
        ar[length-1-i]=temp;
    }
}