#include <iostream>
using namespace std;
string deCrease(string st)  {  
   string in = "";  
   in += st[0] + to_string(st.size() - 2) + st[st.size() - 1];   
   return in;
}
   int main() {
   int n;   
   cin >> n;    
   string str[n];    
   for (int i = 0; i < n; i ++)    
   cin >> str[i];    
   for (int i = 0; i < n; i ++) 
   {    if (str[i].size() < 10)
       {   
       cout << str[i] << endl;      
       }    
       else 
       {    
      string out = deCrease(str[i]);    
       cout << out << endl;    
       }    
}    
return 0;}
