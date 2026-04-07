class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int start = points[0][1];
        int end = points[0][0];
        int p = 1;

        for (int i = 1; i < points.size(); i++) {

            end = points[i][0];
            if (start < end) {
                p++;
                start = points[i][1];
            }
        }
        return p;
    }
};