class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
          int siz=A[0].size()-1;
          int q=0;
          for(int i=0;i<A.size();i++){
              q=0;
              for(int j=0;j<A[i].size();j++){
                  if(A[i][siz-j])q=q|(0<<j);
                  else q=q|(1<<j);
              }
              for(int j=0;j<A[i].size();j++){
                  if(q&(1<<j))A[i][j]=1;
                  else A[i][j]=0;
              }
          }
          return A;
    }
};
