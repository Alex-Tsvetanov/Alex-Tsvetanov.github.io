#include<iostream>
#include<string>
using namespace std;
int cifra(char c){
    if(c >= '0' && c <= '9'){
        return c - '0';
    }
    return c - 'A' + 10;
}
string razlika(string s, int a){
    string s1="", s2 = "", razlika="", result="";
    int i, naum = 0;
    for(i=s.size()-1; i>=0; i--){
        s1 += s[i];
    }
    int a1 = a;
    while(a1>0){
        s2 += (a1%10 + '0');
        a1 /= 10;
    }
    for(i=s2.size(); i<s1.size(); i++){
        s2 += "0";
    }
    for(i=0; i<s1.size(); i++){
        int cifra = ((s1[i] - '0') - (s2[i] - '0') - naum + 10)%10;
        if(s1[i] - naum < s2[i]){
            naum = 1;
        }
        else{
            naum = 0;
        }
        razlika += (cifra + '0');
    }
    for(i=razlika.size()-1; i>=0 && razlika[i] == '0'; i--){}
    if(i == -1){
        result = "0";
    }
    else{
        for(; i>=0; i--){
            result += razlika[i];
        }
    }
    return result;
}
int ostatak(string s, int a){
    int result = 0, i;
    for(i=0; i<s.size(); i++){
        result = (result*10 + (s[i] - '0'))%a;
    }
    return result;
}
bool cmp(string s, int a){
    string s1="";
    int a1 = a;
    while(a1>0){
        s1 += (a1%10 + '0');
        a1 /= 10;
    }
    if(s.size() == s1.size()){
        return s > s1;
    }
    return s.size() > s1.size();
}
int main(){
    int p, i, j, mod[65538], parvo_sreshtnati[256][256], parvo_povtorenie;
    bool povtorenie = false;
    string n, f1, f2;
    cin >> p >> n >> f1 >> f2;
    for(i=0; i<p*p; i++){
        for(j=0; j<p*p; j++){
            parvo_sreshtnati[i][j] = -1;
        }
    }
    if(f1.size() == 1){
        f1 = "0" + f1;
    }
    if(f2.size() == 1){
        f2 = "0" + f2;
    }
    mod[1] = cifra(f1[f1.size() - 2])*p + cifra(f1[f1.size() - 1]);
    mod[2] = cifra(f2[f2.size() - 2])*p + cifra(f2[f2.size() - 1]);
    parvo_sreshtnati[mod[1]][mod[2]] = 1;
    for(i=3; !povtorenie; i++){
        mod[i] = (mod[i-2] + mod[i-1])%(p*p);
        if(parvo_sreshtnati[mod[i-1]][mod[i]] == -1){
            parvo_sreshtnati[mod[i-1]][mod[i]] = i-1;
        }
        else{
            povtorenie=true;
            parvo_povtorenie = i-1;
        }
    }
    int povt_prez = parvo_povtorenie - parvo_sreshtnati[mod[parvo_povtorenie]][mod[parvo_povtorenie+1]];
    int nomer=0;
    if(cmp(n, parvo_povtorenie)){
        nomer = ostatak(razlika(n, parvo_povtorenie), povt_prez) + parvo_sreshtnati[mod[parvo_povtorenie]][mod[parvo_povtorenie+1]];
    }
    else{
        for(i=0; i<n.size(); i++){
            nomer = nomer*10 +(n[i] - '0');
        }
    }
    if(mod[nomer]/p > 9){
        cout << char(mod[nomer]/p - 10 + 'A') << '\n';
    }
    else{
        cout << mod[nomer]/p << '\n';
    }
    return 0;
}
