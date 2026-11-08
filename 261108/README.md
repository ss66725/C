# 261108 学习记录

今天练习素数判断和循环输出。

| 文件 | 内容 |
|---|---|
| is_prime_check.c | 输入一个数，判断是否为素数 |
| primes_200_300.c | 输出 200–300 之间的所有素数，每行 4 个 |
| multiplication_table.c | 九九乘法表（与 261106/multiplication_table.c 功能相同，只是空格写法不同） |

**知识点**：素数判断（只需检查到 `sqrt(x)`）、函数的声明与调用、按行输出

**本次整理的改动**
- is_prime_check.c、primes_200_300.c：`is_prime` 原来对 2 和 3 返回“不是素数”，现已改为只把小于 2 的数视为非素数。提示语仍写着“大于三”，如需保持一致可以自行修改
- 删除 `tempCodeRunnerFile.c`。这是 VS Code 自动生成的残缺片段（只有两行语句），无法编译。可以用 `git checkout -- 261108/tempCodeRunnerFile.c` 恢复

## 期望输出

本文件夹里的程序都有期望输出，放在 [tests/](tests/) 文件夹中。在仓库根目录运行 `python run_tests.py 261108` 即可自动检查。
