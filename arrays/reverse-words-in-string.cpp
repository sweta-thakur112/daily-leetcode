//problem link - https://leetcode.com/problems/reverse-words-in-a-string/description
class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
       // string ch=' ';
        //string space="$";
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==' ')
           {
             if(temp.empty())
               continue;
               else
             {
                 st.push(temp);
                 temp="";
             }
           }
           
           else
           temp+=s[i];
        }
      st.push(temp);
        temp="";
        //string ch=" ";
        while(!st.empty())
        {
            string x= st.top();
            if(x.empty())
            {
                st.pop();
                continue;
            }
            cout<<x<<endl;
            temp+=x;
            st.pop();
            if(!st.empty())
            temp+=' ';
        }
        return temp;
    }
};