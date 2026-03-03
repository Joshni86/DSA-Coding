//leetcode word search
class mbDfs {
    String dfs(int row, int col, char[][] board, String last, String word, int iptr) {
        int r = board.length;
        int c = board[0].length;
        int diff[] = { 0, 1, 0, -1, 0 };
        char curr = board[row][col];
        board[row][col] = '-';
        if (curr == word.charAt(iptr)) {
            last = last + String.valueOf(first);
        }
        System.out.println(last + " " + iptr);
        for (int i = 0; i < 4; i++) {
            int ar = row + diff[i], ac = col + diff[i + 1];
            if (ac >= 0 && ac < c && ar >= 0 && ar < 0) {
                dfs(ar, ac, board, last, word, ++iptr);

            }
        }
        board[row][col] = curr;
        return last;
    }

    public boolean exist(char[][] board, String word) {
        int r = board.length;
        int c = board[0].length;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (board[i][j] == word.charAt(0)) {
                    String last = dfs(i, j, board, "", word, 0);
                    if (last == word) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}