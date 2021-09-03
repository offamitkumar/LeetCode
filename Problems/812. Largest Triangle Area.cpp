class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans=0;
        for(int i=0;i<points.size();++i){
           for(int j=i+1;j<points.size();++j){
               for(int k=j+1;k<points.size();++k){
                   double a=points[i][0];
                   double b=points[i][1];
                   double c=points[j][0];
                   double d=points[j][1];
                   double e=points[k][0];
                   double f=points[k][1];
                   double d1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
                   double d2=sqrt((a-e)*(a-e)+(b-f)*(b-f));
                   double d3=sqrt((c-e)*(c-e)+(d-f)*(d-f));
                   double s=(d1+d2+d3)/2;
                   double area=sqrt(s*(s-d1)*(s-d2)*(s-d3));
                   ans=max(ans,area);
               }
           } 
        }
        return ans;
    }
};
