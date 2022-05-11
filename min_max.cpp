#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);

int main() {
    // Write C++ code here
    
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    
       
    unsigned long int max=0;
    unsigned long int min=0;
    vector< unsigned long int> nums;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=1){
            unsigned long int sum=0;
            unsigned long int curr_num=i;
            
            for(int j=0;j<5;j++)
            {
                if(curr_num!=j)
                {
                    sum+=arr[j];
                }
            }
           nums.push_back(sum);

        }
    }
    
    min=nums[0];
    max=nums[0];
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]<min)
        {
            min=nums[j];
        }
        if(nums[j]>max)
        {
            max=nums[j];
        }
    }
    cout << min << " " << max << endl;
    
    return 0;
}