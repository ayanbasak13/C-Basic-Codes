#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) 
{
    stack <int> st;
    int a,flag=0;
    for(int i=0;i<s.length();i++)
    {
         if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
            st.push(s[i]);  
         else if(s[i]==')')
         {
               if(st.top()=='(')
               {
                   flag=1;
                   if(!st.empty())
                        st.pop();
               }
               else
               {
                   flag=0;
                   break;
               }
         }         
         else if(s[i]=='}')
         {
              if(st.top()=='{')
               {
                   flag=1;
                   if(!st.empty())
                        st.pop();
               }
                    
               else
               {
                   flag=0;
                   break;
               }
         }                     
         else if(s[i]==']')
         {
               if(st.top()=='[')
               {
                   flag=1;
                   if(!st.empty())
                        st.pop();
               }
               else
               {
                   flag=0;
                   break;
               }
         }    
            
        else
            a=2;
           
    }      
        
    if(flag==1)
           return "YES";
    else
           return "NO";
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));


    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    /*for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);*/

        string result = isBalanced("(([){(}(}[][[[]}{}]]()[]}})[]])})(([]([})]{[]{}}]](]{[]{}{)){()[}([}{[))[[})[{{[)}{]}{)]]{){}((({][(]{}))]{](]{)}[[()[((]({{{]({])(})}]{[)}(]{](){()[{)[}({[[]}([}]}[(])}])[[}[[)}[[]]][{)");

        cout << result << "\n";

    //fout.close();

    return 0;
    getch();
}

