# Knuth-Morris-Pratt Algorithm

## Youtube video - https://www.youtube.com/watch?v=JoF0Z7nVSrA

## Naive Algorithm - 

Time Complexity - O(n^2)

    // code here
        // int n = pat.length();
        // int m = txt.length();
        // vector<int> res;
        
        // if(n>m){
        //     return res;
        // }
        
        // for(int i=0;i<=m-n;i++){  ------------------------------------------- loop 1
        //     // cout<<(pat == txt.substr(i,n))<<"-";
        //     // cout<<txt.substr(i,n)<<endl;
        
        //     if(pat == txt.substr(i,n)){ ------------------------------------- loop 2
        //         res.push_back(i);
        //         // cout<<"res"<<i<<endl;
        //     }
        //     // cout<<i<<endl;
        // }
        // return res;

In this Approach, the pointer will check every character of the both strings from the beginning.

Let i is the pointer for text string and j is the pointer for pattern string.

* If the characters at i and j match each other, then the value of i and j is incremented by 1.
* if the characters at i and j does not match, then j <-- 0 and i <-- i-n.

![Screenshot 2024-12-03 002457](https://github.com/user-attachments/assets/b78d2ccd-1f4a-46df-818b-e45c62aff019)

        






## KMP Algorithm - 

Time Complexity - O(n+m)
  
    class Solution {
    public:
    vector<int> search(string& pat, string& txt) {
        
        
        vector<int> res;
        int m = txt.length();
        int n = pat.length();
        
        if(n>m || pat==""){
            return res;
        }
        
        int lps[n],p=0,i=1;
        
        lps[0]=0;
        
        while(i<n){
            if(pat[p] == pat[i]){
                lps[i] = p+1;
                p++;
                i++;
            }
            else if(lps[p] == 0){
                lps[i] = 0;
                i++;
            }
            else{
                p = lps[p-1];
            }
        }
        
        
        i=0;
        int j=0;
        while(i<m){
            if(txt[i]==pat[j]){
                i++;
                j++;
            }
            else{
                if(j==0){
                    i++;
                }
                else{
                    j= lps[j-1];
                }
            }
            
            if(j==n){
                res.push_back(i-n);
            }
        }
        return res;
    }
    };


In this an Longest prefix Suffix array is made.
