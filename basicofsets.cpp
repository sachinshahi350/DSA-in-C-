#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
   unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.erase(2);
    int target = 40;
    // s.find() -> it searches in the set, and if it is not found then it returns tha s.end() last elements
    if(s.find(target)!=s.end()){ // target exists
        cout<<"exists"<<endl;

    }
    else cout<<"does not exists"<<endl;
    cout<<s.size()<<endl;
    for(int ele : s){
        cout<<ele<<" ";
    }
}
