#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3;
    char ch;
    cin>>s1>>s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    ch=s1[0];
    s1[0]=s2[0];
    s2[0]=ch;
    cout<<s1<<" "<<s2;

    return 0;
}
