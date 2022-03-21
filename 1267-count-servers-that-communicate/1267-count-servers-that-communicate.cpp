class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int count = 0;
        for (int i = 0; i < m; i++) {
            int first = -1, cnt = 0;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    if (cnt == 0)   first = j;
                    else {
                        visited[i][first] = visited[i][j] = true;
                    }
                    cnt++;
                }
            }
        }
        for (int j = 0; j < n; j++) {
            int first = -1, cnt = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1) {
                    if (cnt == 0)   first = i;
                    else {
                        visited[first][j] = visited[i][j] = true;
                    }
                    cnt++;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && visited[i][j])   count++;
            }
        }
        
        return count;
    }
};