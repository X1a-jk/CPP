#include <iostream>
#include <string>
using namespace std;

struct candybar
    {
        string band;
        float weight;
        int sugar;

    };

int main(){    
    candybar *bars=new candybar;
    candybar candies[3];
    candies[0]={"MM",2.3,350};
    bars=candies;
    cout<<bars->band<<endl;
    return 0;    
}