class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        tb_values = []
        lr_values = []
        for i in range(len(grid)):
            max_lr = 0
            for j in range(len(grid[i])):
                if grid[i][j] > max_lr:
                    max_lr = grid[i][j]
            lr_values.append(max_lr)

        for j in range(len(grid)):
            max_tb = 0
            for i in range(len(grid[j])):
                if grid[i][j] > max_tb:
                    max_tb = grid[i][j]
            tb_values.append(max_tb)

        max_sum = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                max_height = 0
                if tb_values[j] < lr_values[i]:
                    max_height = tb_values[j]
                elif tb_values[j] > lr_values[i]:
                    max_height = lr_values[i]
                else:
                    max_height = tb_values[j]
                if max_height > grid[i][j]:
                    max_sum += max_height - grid[i][j]

        return max_sum
