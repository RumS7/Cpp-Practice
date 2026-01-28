#include<bits/stdc++.h>
#include "payment.cpp"
using namespace std;

class wallet:public payment{

    public:
    wallet(){};
    void pay(){
        cout<<"paid using wallet"<<endl;
    }
};