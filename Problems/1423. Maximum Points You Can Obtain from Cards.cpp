class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=accumulate(cardPoints.begin(),cardPoints.end(),0); 
        const int &n = cardPoints.size(); 
        int total{}; 
        for (int i=0; i<(n-k); ++i) {
            total+=cardPoints[i]; 
            ans-=cardPoints[i]; 
        }
        int temp = ans; 
        for (int i=0; i<k; ++i) {
            temp+=cardPoints[i]; 
            temp-=cardPoints[(n-k)+i];
            total-=cardPoints[i]; 
            total+=cardPoints[(n-k)+i]; 
            ans = max(ans , temp); 
        }
        return ans; 
    }
};

