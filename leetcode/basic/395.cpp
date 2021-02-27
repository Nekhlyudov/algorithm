class Solution {
public:
    int dfs(string &s,int l,int r,int k){
     
        int mp[26];memset(mp,0,sizeof(mp));
        for(int i=l;i<r;i++){
            mp[s[i]-'a']++;
        }
        int spil=-1;
        for(int i=0;i<26;i++){
            if(mp[i]>0&&mp[i]<k){spil=i;break;}
        }
        if(spil==-1)return r-l;
        int ll=l;
        int ans=0;
        while(ll<r){
             while(ll<r&&s[ll]==('a'+spil)){
                 ll++;
             }
             if(ll==r)break;
             int start=ll;
             while(ll<r&&s[ll]!=(spil+'a')){
                 ll++;
             }
             
             ans=max(dfs(s,start,ll,k),ans);
        }
        return ans;
    }
    int longestSubstring(string s, int k) {
        return dfs(s,0,(int)s.length(),k);
    }
};
