# 261030 学习记录

今天练习二维数组、函数、字符串比较和循环嵌套。

| 文件 | 内容 |
|---|---|
| print_2d_array.c | 3×4 二维数组，按行打印 12 个数（用指针顺序遍历） |
| factorial_sum.c | 输入 n，计算 1! + 2! + … + n!，用函数 `factorial` 和 `factorial_add` 实现 |
| password_check.c | 密码验证，输入错误就循环提示，直到输入 `123456` |
| grid_print.c | 输入行数和列数，打印 `[i,j]` 格式的网格 |
| add_two_floats.c | 输入两个浮点数，输出它们的和 |

**知识点**：二维数组与指针、函数声明与定义、`strcmp` 字符串比较、`do-while`、嵌套循环

**注意**：factorial_sum.c 中 `int` 在 n ≥ 13 时会溢出，结果会出错，之后可以学习 `long long` 或 `unsigned long long`。

**本次整理的改动**
- password_check.c：`scanf("%s", temp)` 改为 `scanf("%9s", temp)`。`temp` 只有 10 个字节，输入超过 9 个字符时原来会越界写入
- grid_print.c：换行条件 `j == row` 改为 `j == column`。原来行数和列数不相等时，换行位置是错的

## 期望输出

本文件夹里的程序都有期望输出，放在 [tests/](tests/) 文件夹中。在仓库根目录运行 `python run_tests.py 261030` 即可自动检查。
