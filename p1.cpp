#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    bool chk;
    vector<string> res;
    string str;
    getline(cin,str);
    stringstream ss(str);
    string wrd;

    while(ss >> wrd){
        chk = false;
        for(char ch : wrd){
            if(isdigit(ch)){
                chk = true;
                break;
            }
        }
        if(chk){
            res.push_back(wrd);
        }
    }

    for(string s : res){
        if(s.find('9') == string::npos){
            cout<< stoi(s) << endl;
        }
    }
    

    return 0;
}