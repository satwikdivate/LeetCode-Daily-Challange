  #include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& arr) {
        int count=0;
        int element;

        for(int i=0;i<arr.size();i++){

            if(count==0){
                element=arr[i];
                count++;
            }
            else if(element==arr[i])
                count++;
            else
                count--;
        }

        return element;
    }