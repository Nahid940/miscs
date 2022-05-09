
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void plusMinus(vector<int> arr) {
    
    int size=arr.size();
    
    double positive=0;
    double negative=0;
    double zero=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=-100 && arr[i]<=100){
            if(arr[i]>0)
            {
                positive++;
            }
            if(arr[i]==0)
            {
                zero++;
            }
            if(arr[i]<0)
            {
                negative++;
            }
        }
    }
    
    std::cout << fixed << setprecision(6) << positive/size << "\n";
    std::cout << fixed << setprecision(6) << negative/size << "\n";
    std::cout << fixed << setprecision(6) << zero/size << "\n";
}