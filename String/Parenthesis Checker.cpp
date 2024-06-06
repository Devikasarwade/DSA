//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    
        bool isOpening(char cur) {
        return (cur == '(' || cur == '{' || cur == '[');
    }

    bool isMatching(char a, char b) {
        return (a=='(' && b==')') ||   
                (a=='{' && b=='}')||   
                (a=='[' && b==']');     
    }

    bool ispar(string x)
    {
        if(x.length()==0 || x.length()==1) return false;
        if(x[0]==')' || x[0]=='}' || x[0]==']') return false;
        
        stack<char> s;
        int len = x.length();
        
        for(int i=0; i<len; i++){
            char cur = x[i];
            if(isOpening(cur)){
                s.push(cur);
            }
            else{
                if(s.empty()){
                    return false;
                }
                else{
                    if(!isMatching(s.top(), cur)){
                        return false;
                    }
                    else{
                        s.pop();
                    }
                }
            }
        }
        return s.empty();
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
