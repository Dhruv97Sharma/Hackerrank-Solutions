string superReducedString(string s) {
   // new vecotr to store all the characters of the string
    vector<char> v;
    for(char ch : s){
        v.push_back(ch);
    }
    // starting from index 1 and 0
for(int i = 1; i < v.size(); i++){
    if(v[i] == v[i-1]){
        //checking if s[i-1] != s[i]
        //else removing the twosimliar characters from the vector using erase method
        auto it = v.begin(); // initial pos denoting iterator
        v.erase(it+(i-1),it+(i+1)); // i+1 not included
        i = 0; // setting i back to 0 whenever this "if block" excutes
    }
   // if all char get removed
if(v.size() == 0){
    return "Empty String";
}
// else return the remaining answer string
string ans = "";
for(char ch : v){
ans += ch;   

}

return ans;

}
