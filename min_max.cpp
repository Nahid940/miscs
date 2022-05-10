// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);

int main() {
    // Write C++ code here
    
    vector<int> arr;
    arr.push_back(140638725);
    arr.push_back(436257910);
    arr.push_back(953274816);
    arr.push_back(734065819);
    arr.push_back(362748590);
    
    //140638725 436257910 953274816 734065819 362748590
    
    unsigned long int max=0;
    unsigned long int min=0;
    vector<int> nums;
    unsigned long int prev_min=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=1){
            unsigned long int sum=0;
            unsigned long int curr_num=arr[i];
            
            for(int j=0;j<5;j++)
            {
                if(curr_num!=arr[j])
                { 
                    sum+=arr[j];
                    //cout << arr[j] << endl;
                }
            }
            //cout << " " << endl;
            
            if(sum>max)
            {
                max=sum;
            }
            
            if(sum<max)
            {
                min=sum;
                prev_min=min;
                if(sum<prev_min)
                {
                    min=prev_min;
                }
                cout << min << endl;
            }
        }
    }
    //cout << min << " " << max << endl;
    
    return 0;
}