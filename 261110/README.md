# 261110 学习记录

今天练函数指针和指针数组。

| 文件 | 内容 |
|---|---|
| function_pointer_choose.c | 用函数指针选一个函数（max / min / sum），再对 3 和 5 求值 |
| function_pointer_array.c | 把函数指针传进 `combine`，对两个数组逐元素算出第三个数组 |
| return_pointer_max.c | 返回指针的函数 `maxp`，拿到较大数的地址后通过它改掉原变量 |
| month_name_array.c | 指针数组存 12 个月份名，输入月份号输出英文名 |
| malloc_average_max.c | `malloc` 申请数组，读入 n 个数，算平均值和最大值 |

**知识点**：函数指针的声明与赋值（`int (*p)(int, int)`）、把函数指针当参数传、返回指针的函数、指针数组 `char *month[]`、`malloc` / `free` 与堆内存

## 期望输出

本文件夹里的程序都有期望输出，放在 [tests/](tests/) 文件夹中。在仓库根目录运行 `python run_tests.py 261110` 即可自动检查。

| 用例 | 检查什么 |
|---|---|
| `function_pointer_choose.txt` | 三种模式下 3 和 5 的结果分别是 5 / 3 / 8 |
| `function_pointer_array.txt` | 三种模式下逐元素运算的结果 |
| `return_pointer_max.txt` | 通过返回的指针改值，两个变量的实际变化 |
| `month_name_array.txt` | 正常月份、1 月、以及越界的 13 |
| `malloc_average_max.txt` | 一组输入下的平均值与最大值 |

## 两个可以自己改的地方

1. **`month_name_array.c` 最后一行没有换行**：`printf("The month is %s", month[n-1])` 少了 `\n`，输出会粘在提示语后面。想让结果单独占一行，在末尾加上 `\n`。
2. **`malloc_average_max.c` 的 `malloc` 检查位置不对**：`if(a == NULL)` 写在了 `scanf` 读入之后，指针已经被用过了。应该在 `malloc` 紧接着就判断，否则分配失败时会直接崩在读取那一步。

这两处都不影响正常运行，改了以后 `month_name_array.txt`、`malloc_average_max.txt` 的期望输出也要一起调整。
