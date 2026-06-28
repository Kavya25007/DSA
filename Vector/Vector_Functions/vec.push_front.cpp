#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = { 56 , 87 , 90 , 62};

    cout << "Size before push front = "<< vec.size() <<endl;

    vec.insert(vec.begin() , 76);

    for(int i :vec){
        cout << i << endl;

    }
    cout << "Size after push front = "<< vec.size() <<endl;
    
    cout << vec.at(1)<< endl;

    return 0;
                                                                                                                                                                                                                                                                                                                                                                                                 
}