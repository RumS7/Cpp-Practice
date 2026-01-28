#ifndef PAYMENT_CPP
#define PAYMENT_CPP
#include<bits/stdc++.h>
using namespace std;

class payment{
    public:
    virtual void pay()=0;
    virtual ~payment(){};
};

#endif