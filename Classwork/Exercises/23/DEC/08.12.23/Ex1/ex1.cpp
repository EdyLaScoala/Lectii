#include <bits/stdc++.h>

using namespace std;

char s[256];
short int cnt;

int main(){
    
    cin.getline(s, 255);
    
    for (int i = 0; i < strlen(s); ++i){
        
        if (s[i] == ' ' && s[i] != '#'){
            ++i;
            while(s[i + cnt] != ' ' && i + cnt < strlen(s)){
                ++cnt;
            }
            
            if (cnt % 2 == 0){
                for (i = i; cnt > 0; --cnt){
                    s[i + cnt - 1] = '#';
                }
            }
        }
        else if (i == 0 && s[i] != '#'){
            while(s[i + cnt] != ' '){
                ++cnt;
            }
            
            if (cnt % 2 == 0){
                for (i = i; cnt > 0; --cnt){
                    s[i + cnt - 1] = '#';
                }
            }
            
        }
        
        cnt = 0;
        
    }
    
    cout << s;
    
    return 0;
}