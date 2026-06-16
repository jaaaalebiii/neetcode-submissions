class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seenrow;
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') {
                    continue;
                }
                if (seenrow.find(val) != seenrow.end()) {
                    return false;
                }
                seenrow.insert(val);
            }
        }
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seencol;
            for (int j = 0; j < 9; j++) {
                char val = board[j][i];
                if (val == '.') {
                    continue;
                }
                if (seencol.find(val) != seencol.end()) {
                    return false;
                }
                seencol.insert(val);
            }
        }
        for (int startRow = 0; startRow < 9; startRow += 3) {
            for (int startCol = 0; startCol < 9; startCol += 3) {
                unordered_set<char> seenbox;

                for (int r = startRow; r < startRow + 3; r++) {
                    for (int c = startCol; c < startCol + 3; c++) {
                        char val = board[r][c];
                        if (val=='.') {
                            continue;
                        }
                        if (seenbox.find(val)!= seenbox.end()) {
                            return false;
                        }
                        seenbox.insert(val);
                    }
                }
            }
        }
        return true;
    }
};
