
#include <bits/stdc++.h>
using namespace std;
#define fo(i, s, e) for (int i = s; i < e; i++)
typedef long long ll;
#define ff first
#define ss second
#define in insert
#define all(x) x.begin(), x.end()
#define pb push_back
using vi = vector<int>;
using vvi = vector<vector<int>>;

class Human{
public :
    string name = "no name";
    void introduce(string s) ;// functions are called methods of class 
} ;

Human::name = "anil" ; // can only update static members

void Human::introduce( string s){
    Human::name = s ; // class function can update class member 
    cout<<"Hello my name is "<<Human::name<<"\n" ;// we can access tge public data outside the class using scope reso operator but cant overwrite it 
} ;

int main()
{  
    Human anil ;
    anil.introduce("anil") ;
    return 0;
} 
