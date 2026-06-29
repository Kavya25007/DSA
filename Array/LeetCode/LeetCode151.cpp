/*
Algorithm: Reverse Words in a String (LeetCode 151)
🔹 Approach: Reverse whole string + reverse each word
STEP 1: Reverse entire string
    Reverse the whole string character by character

    Example:

        "the sky is blue"
        → "eulb si yks eht"
STEP 2: Traverse and fix each word
    Use one pointer i
    While i < n:
    If you find a non-space:
    mark start = i
    move i until space or end → end = i-1
    Now:
    reverse substring from start to end


    So;
    "eulb" → "blue"
    "si"   → "is"
    "yks"  → "sky"
    "eht"  → "the"

STEP 3: Remove extra spaces (important)

    While building final result:

    skip multiple spaces
    add only one space between words
    avoid leading/trailing spaces
    🔥 Final Flow (very important to remember)
    1. reverse whole string
    2. loop through string
    3. for each word → reverse it
    4. clean spaces + build answer*/

#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {


        string ans = "";

        reverse(s.begin() , s.end());
        for(int i = 0 ; i < s.length() ; i++){
            string word = "";
            while(i < s.length() && s[i] != ' ' ){
                word += s[i];
                i++;

            }

            reverse(word.begin() , word.end());
            if(word.length() > 0){
                ans += " " + word;
            }

        }
        return ans.empty() ? "" : ans.substr(1);
    
};

int main() {

    string s;
    getline(cin, s);

    cout << reverseWords(s) << endl;

    return 0;
}