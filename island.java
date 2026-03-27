
//leetcode making a large island
import java.util.HashSet;
import java.util.Set;

public class island {
    int diff[] = { 0, -1, 0, 1, 0 };

    void dfs(int r, int c, int row, int col, int grid[][], int isl[][], int ictr) {
        grid[row][col] = -1;
        isl[row][col] = ictr;
        for (int i = 0; i < 4; i++) {
            int ar = row + diff[i], ac = col + diff[i + 1];
            if (ar >= 0 && ar < r && ac >= 0 && ac < c) {
                dfs(r, c, ar, ac, grid, isl, ictr);
            }
        }
    }

    public int largestIsland(int[][] grid) {
        int r = grid.length;
        int c = grid[0].length;
        int ctr = 0;
        int[][] isl = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (grid[i][j] == 1) {
                    dfs(r, c, i, j, grid, isl, ++ctr);
                }
            }

        }
        int islctr[] = new int[ctr + 1];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (isl[i][j] != 0) {
                    islctr[isl[i][j]]++;
                }
            }
        }
        int ans = 1;
        for (int row = 0; row < r; row++) {
            for (int col = 0; col < c; col++) {
                if (grid[row][col] == 0) {
                    Set<Integer> uisl = new HashSet<>();
                    for (int i = 0; i < 4; i++) {
                        int ar = row + diff[i], ac = col + diff[i + 1];
                        if (ar >= 0 && ar < r && ac >= 0 && ac < c && isl[ar][ac] != 0) {
                            uisl.add(isl[ar][ar]);
                        }
                    }
                    int currsize = 1;
                    for (int ictr : uisl) {
                        currsize += islctr[ictr];
                    }
                    ans = Math.max(ans, currsize);
                }
            }
        }
        return ans;
    }
}
