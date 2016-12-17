#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int n = 0;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin, s);
    int nums[n];
    int ind = 0;
    string curr = "";
    unsigned long long S1[n];
    unsigned long long S2[n];
    for(int i = 0; i<s.length(); i++){
        if(s[i]==' '){
            nums[ind]= atoi(curr.c_str());
            curr = "";
            ind++;
        }else if(i==s.length()-1){
            curr+=s[i];
            nums[ind] = atoi(curr.c_str());
            ind++;
        }else{
            curr+=s[i];
        }
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        S1[i]=sum+nums[i];
        sum+=nums[i];
    }
    sum = 0;
    for(int i = 0; i<n; i++){
        S2[i]=sum+nums[n-1-i];
        sum+=nums[n-1-i];
    }

    unsigned long long h = 0;
    unsigned long long answer = 0;
    for(int i = 0;i<n;i++){
        for(int z = 0; z<n; z++){
            if(S1[i]==S2[z] && S1[i]>h && i<n-z-1){
                h = S1[i];
                answer = i+z+2;
            }
        }
    }

    cout<<answer<<endl;
}
