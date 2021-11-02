class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int p) {
            int counter{}; 
            const int &n =flowerbed.size(); 
            if (n == 1) {
                counter = !flowerbed[0]; 
            } else {
                for (int i=0; i<n; ++i){
                    if (flowerbed[i]) continue; 
                    if (i==0) {
                        if (!flowerbed[i+1]) {
                            counter++; 
                            flowerbed[i] = 1; 
                        }
                    } else if (i == n-1) {
                        if (flowerbed[i-1] == 0) {
                            counter++; 
                            flowerbed[i] = 1; 
                        }
                    } else {
                        if (flowerbed[i+1] + flowerbed[i-1] == 0) {
                            counter++; 
                            flowerbed[i] = 1; 
                        }
                    }
                }
            }
            return counter >= p; 
        }
};

