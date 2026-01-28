#include<bits/stdc++.h>
#include "payment.cpp"
using namespace std;

class upi:public payment{
    string upiid;
    public:
    upi(string upiid){
        this->upiid=upiid;
    }
    void pay(){
        cout<<"paid using UPI id: "<<upiid<<endl;
    }
};