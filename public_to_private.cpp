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
private :
    int age ;
    int getAge(){
        return age ;
    }
public :
    void setAge(int val){
        age = val ;
    }
    void displayAge(){
        cout<<"age "<<getAge()<<"\n"; // accessing private data/functions using public function
    }
} ;

int main()
{  
    Human anil ;
    anil.setAge(10) ;
    anil.displayAge() ;
    return 0;
} 
