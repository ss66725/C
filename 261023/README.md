# 261023 学习记录

今天练习分支判断、数组、指针和冒泡排序。

| 文件 | 内容 |
|---|---|
| max_of_three.c | 输入三个数，找出最大值 |
| piecewise_function.c | 分段函数：x > 10 输出 3x-1；1 < x ≤ 10 输出 x；其余输出 2x-1 |
| reverse_digits.c | 输入不超过三位的整数，输出原数和反转后的数（如 123 → 321） |
| reverse_digits_loop.c | 同一题的另一种写法：用 `for` 加 `switch` 依次取百位、十位、个位 |
| read_array.c | 输入 10 个整数并输出，用指针 `p + i` 访问数组 |
| bubble_sort.c | 冒泡排序，把 10 个数降序排列，`swap` 函数通过指针交换 |
| weekday_season.c | 输入星期几（1–7）输出英文，再输入月份输出对应季节 |
| ternary_operator.c | 三目运算符：根据年龄输出不同的话 |

**知识点**：`if-else`、`switch`、整除与取余取位、数组与指针、函数参数传指针、冒泡排序

**待确认**：ternary_operator.c 里 18 岁以上输出的是 `your have died`，看起来是笔误。如果你的本意是别的文字，告诉我即可修改。

**本次整理的改动**
- weekday_season.c：原来用变量 `year` 保存月份，且季节对应错误（如把 5 月判成夏季，还多出一个 `case 41`）。现已改为 `month`，3–5 月为春、6–8 月为夏、9–11 月为秋、12/1/2 月为冬
- reverse_digits_loop.c：原版在循环里重复打印，且循环用了浮点数，无法得到正确结果。现已改为能正常运行的版本，结果与 reverse_digits.c 一致
- reverse_digits.c：`reserved` 改为 `reversed`

## 期望输出

本文件夹里的程序都有期望输出，放在 [tests/](tests/) 文件夹中。在仓库根目录运行 `python run_tests.py 261023` 即可自动检查。
