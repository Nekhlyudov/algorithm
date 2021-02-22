class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int> >x;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    x.push_back(make_pair(1,i));
                    x.push_back(make_pair(2,j));
                }
            }
        }
        for(int i=0;i<x.size();i++){
            if(x[i].first==1){
                for(int j=0;j<matrix[0].size();j++){
                    matrix[x[i].second][j]=0;
                }
            }
            else{
                 for(int j=0;j<matrix.size();j++){
                    matrix[j][x[i].second]=0;
                }
            }
        }

    }
};
