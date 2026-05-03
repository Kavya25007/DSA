/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the letter = "<<endl;
    cin >> ch;
    if (ch>= 'a' && ch <= 'z'){
        cout << "LOWERCASE";
    }else {
        cout << "UPPERCASE";
    }return 0;
}*/

#include<iostream>
using namespace std;
int main(){
int n = -9;
cout << ( n>= 0 ? "positive ": "negative ");
return 0;
}