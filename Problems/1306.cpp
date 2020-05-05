class Solution {
public:
    void dfs(vector<int>&arr,vector<bool>&visited,int current,bool&ok){
        if(ok)return;
        visited[current]=true;
        if(arr[current]==0){
            ok=true;
            return;
        }
        if(current+arr[current]<(int)arr.size() && visited[current+arr[current]]==false && (!ok)){
            visited[current+arr[current]]=true;
            if(arr[current+arr[current]]==0){
                ok=true;
                return;
            }
            dfs(arr,visited,current+arr[current],ok);
        }
        if(current-arr[current]>=0 && visited[current-arr[current]]==false && (!ok) ){
            visited[current-arr[current]]=true;
            if(arr[current-arr[current]]==0){
                ok=true;
                return;
            }
            dfs(arr,visited,current-arr[current],ok);
        }
    }
    bool canReach(vector<int>& arr, int start) {
        if(arr[start]==0){
            return true;
        }
        vector<bool>visited((int)arr.size(),false);
        bool ok=false;
        dfs(arr,visited,start,ok);
        return ok;
    }
};
