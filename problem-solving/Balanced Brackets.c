#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
int i, stack[1000];
    int top = -1;
    string str = "YES";
    string str1 = "NO";
    for(i=0; s[i]!='\0'; i++)
    {

        if(s[i]=='(' || s[i] == '{' || s[i]== '[')
        {
            top++;
            if(top!= 1000)
                stack[top] = s[i];
        }

        else if((stack[top] == '{') && (s[i] == '}'))
            top--;

        else if((stack[top] == '(') && (s[i] == ')'))
            top--;

         else if((stack[top] == '[') && (s[i] == ']'))
            top--;
         else
            return str1;

    }
 

    if((top == -1) && (s[i]=='\0'))
        return str;
    else 
    {
    
            return str1;
    }
 

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
