#include <iostream>
using namespace std;

int main() {
    int a[4]={-1,2,-3,4};

    for(int i=0;i<4;i++) {
        if(a[i]<0) a[i]=0;
        cout<<a[i]<<" ";
    }
}
