#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class String{
    private:
        char* res;
        unsigned int len;
    public:

        //default constructor
        String():res(nullptr),len(0){};

        //length() function
        unsigned int length(){
            return len;
        }
        
        // parameterised constructor
        String(const char* x){
            len=strlen(x);
            res=new char[len+1];
            strcpy(res,x);
                       
        }

        //move constructor
        String(String&& str){
            res=str.res;
            len=str.len;
            str.res=nullptr;
            str.len=0;
        }
        //copy constructor
        String(const String& str){
            len=str.len;
            res=new char[len+1];
            strcpy(res,str.res);
            
        }

        //copy assignment operator
        // String& operator=(const String& str){

        //     if(this !=&str){
        //         char* temp=res;
        //         len=str.len;
        //         res=new char[len+1];
        //         strcpy(res,str.res);
        //         delete[] temp;
        //     }
        //     return *this;
            
        // }

        //copy assignment using move 
        String& operator=(String str){

            Swap(*this,str);
            return *this;
            
        }

        void Swap(String& str1, String& str2 ){
            swap(str1.len,str2.len);
            swap(str1.res,str2.res);
        }
        
        //destructor
        ~String(){
            delete[] res;
        }
    friend ostream& operator<<(ostream& out, const String& str);
    friend istream& operator>>(istream& in, String& str);
};

ostream& operator<<(ostream& out,const String& str){

    out<<str.res;
    return out;
}
istream& operator>>(istream& in, String& str){
 
    str.res= new char[1024];
    in>>str.res;
    return in;
}



int main(){
    String s1;//default constructor;
    String s2="hello";//parameterised constructor
    cout<<s2<<endl;
    String s4=s2; //copy constructor
    s2="world";
    cout<<s4<<endl;
    String s3(s2);//copy constructor
    cout<<s3<<endl;// << operator overloading
    int len=s2.length();// length() member function
    cout<<len<<endl;
    String s5;
    //cin>>s2; // >> operator overloading
    //cout<<s5<<endl;
    s4=s3; //copy assigment operator
    cout<<s4<<endl;

    //move constructor
    String s6=std::move(s2);
    cout<<s6<<endl;
    //cout<<s2<<endl;

}