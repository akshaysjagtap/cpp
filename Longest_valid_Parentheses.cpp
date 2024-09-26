//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int len = x.length();
        if(len % 2 == 1) return false;
        stack<char> st;
        bool lb = false;
        for(int i = 0; i < len; i++)
        {
            switch(x[i])
            {
                case '(': st.push('('); break;
                case '[': st.push('['); break;
                case '{': st.push('{'); break;
                case ')': 
                    if(st.empty()) lb = true;
                    else
                    {
                        if(st.top() == '(') 
                             st.pop();
                        else 
                           lb = true;
                    }
                    break; 
                case ']': 
                    if(st.empty()) lb = true;
                    else
                    {
                        if(st.top() == '[') 
                             st.pop();
                        else 
                           lb = true;
                    }
                        break; 
                case '}': 
               if(st.empty()) lb = true;
                    else
                    {
                        if(st.top() == '{') 
                             st.pop();
                        else 
                           lb = true;
                    }
                          break; 
            }
            if(lb) return false;
        }
        if(st.empty())
        return true;
        else return false;
    }
};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
