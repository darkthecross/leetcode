#include <vector>
#include <iostream>

// void showMap(const std::vector<std::vector<int>> &m)
// {
//     for (const auto &r : m)
//     {
//         for (const auto &c : r)
//         {
//             std::cout << c << "\t";
//         }
//         std::cout << std::endl;
//     }
// }

bool isValid(int m, int n, int i, int j)
{
    return (i >= 0 && i < m && j >= 0 && j < n);
}

class Solution
{
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        if (!isValid(m, n, startRow, startColumn))
        {
            return 0;
        }
        if (m <= 0 || n <= 0 || maxMove <= 0)
        {
            return 0;
        }
        std::vector<std::vector<int>> map_last, map;
        for (auto i = 0; i < m; ++i)
        {
            map.push_back(std::vector<int>(n, 0));
            for (auto j = 0; j < n; ++j)
            {
                map[i][j] += !isValid(m, n, i - 1, j) + !isValid(m, n, i + 1, j) + !isValid(m, n, i, j - 1) + !isValid(m, n, i, j + 1);
            }
        }
        int res = map[startRow][startColumn];
        for (auto step = 1; step < maxMove; ++step)
        {
            map_last = map;
            for (auto i = 0; i < m; ++i)
            {
                for (auto j = 0; j < n; ++j)
                {
                    int s = 0;
                    if (isValid(m, n, i - 1, j))
                    {
                        s += map_last[i - 1][j];
                        s = s%1000000007;
                    }
                    if (isValid(m, n, i + 1, j))
                    {
                        s += map_last[i + 1][j];
                        s = s%1000000007;
                    }
                    if (isValid(m, n, i, j - 1))
                    {
                        s += map_last[i][j - 1];
                        s = s%1000000007;
                    }
                    if (isValid(m, n, i, j + 1))
                    {
                        s += map_last[i][j + 1];
                        s = s%1000000007;
                    }
                    map[i][j] = s;
                }
            }
            res += map[startRow][startColumn];
            res = res % 1000000007;
        }
        return res;
    }
};

int main()
{
    Solution s;
    std::cout << s.findPaths(1, 3, 3, 0, 1) << std::endl;
    return 0;
}