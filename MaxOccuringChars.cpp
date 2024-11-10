//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int> freq(26, 0);  

        
        for (char c : str) {
            freq[c - 'a']++;  

        
        int max_freq = 0;
        char max_char = 'a';
        
        for (int i = 0; i < 26; ++i) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                max_char = 'a' + i;
            } else if (freq[i] == max_freq && ('a' + i) < max_char) {
                
                max_char = 'a' + i;
            }
        }

        return max_char;
    }
}
};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    
cout << "~" << "\n";
}
}