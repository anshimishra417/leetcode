class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       unordered_map<char, int> mp1;
       if(s1.size()>s2.size())return false;
       for(char c:s1)mp1[c]++;
       int r = s1.size(), l=0;
       unordered_map<char,int>mp2;
       for(int i =0; i<s1.size();i++){
        mp2[s2[i]]++;
       }
       if(mp1==mp2)return true;
       while(r<s2.size()){
        mp2[s2[l]]--;
        if(mp2[s2[l]]==0){
            mp2.erase(s2[l]);
        }
        l++;
        mp2[s2[r++]]++;
        if(mp1==mp2)return true;
       }
       return false;
    }
};