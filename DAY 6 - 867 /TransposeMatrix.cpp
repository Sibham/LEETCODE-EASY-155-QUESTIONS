class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>>result(n,vector<int>(m)); //n*m

        for(int i = 0; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

*********************JAVA**************************************
    class Solution {
    public int[][] transpose(int[][] A) {
        int m = A.length;
        int n = A[0].length;
        int[][] result = new int[n][m];
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = A[i][j];
            }
        }
        
        return result;
    }
}
