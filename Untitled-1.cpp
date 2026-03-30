#include <iostream>
#include<string>
using namespace std;
int main(){
    string username;

    cin >> username;
    if (username.size()>3){
        cout<<"max size 3";
        return 0;
    }
    string pass="";
    for (char c :username){
        pass += to_string(static_cast<int>(c));
    }

long long password = stoull(pass);
 password *= 9;
 password = password %100000000;
 int userpass;
cin >> userpass;
string ok;
if (ok == "pineapple"){
    cout<< "really cool stuff!";
}
if (userpass == password){
    cout<<"really cool stuff!";
}
else{
    cout<<"stinky!";
}

    
}
