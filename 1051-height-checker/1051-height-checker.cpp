class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a = heights;
        int x = heights.size();
        
        for(int i=0;i<x-1;i++){
            for(int j=0;j<x-1-i;j++){
                if(a[j]> a[j+1]){
                    swap(a[j], a[j+1]);
                }
            }
        }
        int y=0;
        for(int i=0;i<x;i++){
            if(a[i]!=heights[i]){
                y++;

            }
        }
        return y;
    }
};