#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = { 1 , 2 , 3};

    cout<<"Size = "<<vec.size()<<endl;
    vec.push_back(25);

    cout << "Size after push back = "<< vec.size()<<endl;

    vec.pop_back();
    
    for(int i : vec ){
        cout << i << endl;

    }

    return 0;

}