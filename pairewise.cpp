#include<bits/stdc++.h>
using namespace std;

long long maxPaireWise(vector<int>& numbers){
    long long low = 0;
    for(int i=0;i<numbers.size();i++){
        for(int j=i+1;j<numbers.size();j++){
            if(numbers[i]*numbers[j]>low){
                low = ((long long)numbers[i])*numbers[j];
            }
        }
    }
    return low;
}

long long maxPaireWiseFast(vector<int>& numbers){
    int n = numbers.size(), i=0;
    int m1 = -1;
    long long res = 0;
    for(i=0;i<n;i++){
        if(m1==-1 || numbers[i]>numbers[m1]){
            m1 = i;
        }
    }
    int m2=-1;
    for(i=0;i<n;i++){
        if(i!=m1 && ((m2==-1) || numbers[i]>numbers[m2])){
            m2 = i;
        }
    }
    //cout<<m1<<" "<<m2<<endl;
    res = ((long long)numbers[m1])*numbers[m2];
    return res;
}

int main(){
/*    while(true){
        int n = rand()%1000 + 2;
        cout<<n;
        cout<<endl;
        vector<int>a;
        for(int i=0;i<n;i++){
            a.push_back(rand()%100000);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        long long result = maxPaireWise(a);
        long long result2 = maxPaireWiseFast(a);
        if(result!=result2){
            cout<<"Error at: "<<result<<" "<<result2<<endl;
            break;
        }
        else if(result==result2){
            cout<<"OK"<<endl;
        }
    }*/
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    //long long result = maxPaireWise(numbers);
    long long result2 = maxPaireWiseFast(numbers);
    //cout<<result<<endl;
    cout<<result2<<endl;
}

