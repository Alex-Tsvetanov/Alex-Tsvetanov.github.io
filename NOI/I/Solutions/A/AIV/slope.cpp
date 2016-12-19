#include<iostream>

using namespace std;

bool is_it_in_the_array(double a[],int n, double k){
    for(int i=0;i<n;i++){
        if(k==a[i]){
            return true;
        }
    }
    return false;
}

int unique_elements_in_darray(double a[],int n){
    double uniq[n];
    uniq[0]=a[0];
    int counter=1;

    for(int i=1;i<n;i++){
        if(is_it_in_the_array(uniq,counter,a[i])==false){
            uniq[counter]=a[i];
                counter++;
        }
    }

    return counter;
}

int main(){
    int n;
    cin>>n;
    double slope_array[100];
    int counter=0;
    bool slope90 = false;

    for(int i=0;i<n;i++){
        double x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x2-x1==0){
                slope90=true;
        }else{
            slope_array[counter]=(y2-y1)/(x2-x1);
            counter++;
        }
    }

    if(slope90){
            cout<<1+unique_elements_in_darray(slope_array,counter);
    }else{
            cout<<unique_elements_in_darray(slope_array,counter);
    }

    return 0;
}






