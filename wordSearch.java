class Solution {
    public boolean dfs(int row, int col, int r, int c, char[][] board, String word, int iptr) {

        int diff[] = { 0, 1, 0, -1, 0 };
        char curr = board[row][col];
        board[row][col] = '-';
        if (iptr == word.length()) {
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int ar = row + diff[i], ac = col + diff[i + 1];
            if (ac >= 0 && ac < c && ar >= 0 && ar < r && board[ar][ac] == word.charAt(iptr)) {
                boolean found = dfs(ar, ac, r, c, board, word, iptr + 1);
                if (found)
                    return true;
            }
        }
        board[row][col] = curr;
        return false;
    }

    public boolean exist(char[][] board, String word) {
        int r = board.length;
        int c = board[0].length;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (board[i][j] == word.charAt(0)) {
                    boolean found = dfs(i, j, r, c, board, word, 1);
                    if (found)
                        return true;
                }
            }
        }
        return false;
    }
}