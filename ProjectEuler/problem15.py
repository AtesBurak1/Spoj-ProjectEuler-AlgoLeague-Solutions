grid = []
grid.append([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1])

grid_mini = []

for i in range(20):

    for j in range(1, 21):
        grid[0][j] += grid[0][j-1]

print(grid)
