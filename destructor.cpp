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
private:
    string name ;
    int age ;
    // Human(){              constors cannot be declared as private , privates cannot be accessed outside class
    //     name = "noname ";
    //     age = 0;
    //     // cout<<"constructor is called\n";
    // }
public :
    Human(){
        name = "noname ";
        age = 0;
        cout<<"default constructor\n";
    }

    // Human(string s){
    //     name = s ;
    //     age = 0;
    //     cout<<"constructor with 1 par called\n";
    // }

    Human(string s,int n=21){
        name = s ;
        age = n ;
        cout<<"constructor with 2 par called\n";
    }

    void displayAge() ;
    void displayName() ;
} ;

void Human::displayAge(){
    cout<<"age : "<<Human::age<<"\n" ;
} ;

void Human::displayName(){
    cout<<"age : "<<Human::name<<"\n" ;
}

int main()
{  
    Human anil , pratik("pratik") ,sanj("sanjeet",24);
    anil.displayAge();
    anil.displayName();
    cout<<"\n";
    pratik.displayAge();
    pratik.displayName();
    cout<<"\n";
    sanj.displayAge();
    sanj.displayName();
    cout<<"\n";
    return 0;
} 
