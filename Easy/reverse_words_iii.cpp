#include <vector>

using namespace std;

string reverseWords(string s) {
    
    vector<char> vet;
    int j = 0;
    int i = 0;
    int begin = 0;
    int end = 0;
    
    while(j < s.size()+1){
        if(s[j] == ' '|| j == s.size()){
            begin = i;
            end = j-1;
            while(begin < end){
                char aux = s[begin];
                s[begin] = s[end];
                s[end] = aux;
                begin++;
                end--;
            }
            i = j+1;
        }
        j++;
    }
    return s;
    
}
