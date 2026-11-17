# 261117：动态链表、数组与排序

对应教材第 9 章 9.4.3–9.4.4（动态链表），以及第 5–6 章的数组、排序、字符串练习。

## 文件

| 文件 | 内容 |
|---|---|
| `dynamic_list_create.c` | `malloc` 在循环里建三个节点，尾插法连成链表，遍历输出后逐个释放 |
| `vla_array_max.c` | 变长数组（VLA）：按输入的大小定义数组，填充后求最大值 |
| `bubble_sort_desc.c` | 冒泡排序：三个数从大到小 |
| `selection_sort_random.c` | 选择排序：随机数排序（降序） |
| `bubble_sort_random.c` | 冒泡排序：随机数排序（升序） |
| `matrix_max_position.c` | 二维数组找最大值，同时记录行、列下标 |
| `count_words.c` | 统计输入句子里的单词个数 |

## 知识点

### 动态链表（9.4.3–9.4.4）

- **`malloc` 申请的内存没有名字。** 它只返回一个地址，只能用指针接住，访问成员用 `->`。
- `malloc` 在**运行时**分配，节点数量可以随数据变；静态变量（`s1`、`s2`）在编译时就定死了数量。
- **`head` 和 `tail` 必须初始化为 `NULL`。** 不初始化里面是随机垃圾值，`head == NULL` 判断不可靠，`tail->next` 可能访问非法地址。
- **`head` 只在第一轮赋值**，之后永远指向第一个节点；`tail` 每一轮都要更新。
- 循环四步：造 → 填 → 接 → 换手。
- **赋值永远是右边给左边。** 想让 `tail` 指向新节点写 `tail = s`，不是 `s = tail`。写反了 `tail` 永远是 `NULL`，第二轮直接段错误。
- **释放不能直接 `free(p); p = p->next;`**，会读到已归还的内存（use-after-free）。正确：`t = head; head = head->next; free(t);`。
- `free` 认的是**地址**，不是变量名，`s`/`head`/`t` 装的是同一个地址。

### 变长数组

- `int a[num];` 是 C99 的变长数组，长度在运行时才确定。C11 把它列为可选特性，gcc 默认支持。
- 输入没做校验：`num` 为 0 或负数时行为未定义，实际写程序要检查。

### 排序

- 冒泡：相邻两个比较，每一轮把最值顶到底部，`j < n-1-i` 里的 `-i` 是因为后面已经排好了。
- 选择：每一轮只在未排序部分找最值的下标，最后统一交换，交换次数比冒泡少。
- 负数参与排序时，`max = 0` 这类初值是错误的（如果全部为负，结果会是 0）。要找最值应以第一个元素为初值。

### 数组与字符串

- 二维数组找最大值，**记录位置的变量必须初始化**。原来的写法 `row`、`column` 没有初值，最大值恰好在 `arr[0][0]` 时打印出 `arr[0][40]` 这种垃圾值。
- `bool` 需要 `#include <stdbool.h>`。
- `gets` 在 C11 已被移除（无法限制长度），改用 `fgets(arr, sizeof(arr), stdin)`。
- 统计单词数的思路：遇到空格 → 标记断开；遇到非空格且刚才断开 → 新单词开始，计数加一。

## 本次改动

- 按功能重命名：`03.c` → `vla_array_max.c`，`04.c` → `bubble_sort_desc.c`，`05.c` → `selection_sort_random.c`，`07.c` → `bubble_sort_random.c`，`08.c` → `matrix_max_position.c`，`10.c` → `count_words.c`。
- **修复 `matrix_max_position.c`**：`row`、`column` 增加初值 `0`。原代码在最大值位于 `arr[0][0]` 时会打印未初始化的值。
- **修复 `count_words.c`**：补 `#include <stdbool.h>`（原代码 `bool` 未声明，编译失败）；`gets` 换成 `fgets`；缓冲区从 16 加到 128。
- 补充 4 个可自动测试程序的期望输出。

## 期望输出说明

| 程序 | 说明 |
|---|---|
| `dynamic_list_create` | 无输入，输出固定的三个学生 |
| `vla_array_max` | 输入数组长度，程序填充 `i+10` 并求最大值 |
| `bubble_sort_desc` | 输入三个数，输出从大到小的结果 |
| `matrix_max_position` | 输入 12 个数，输出最大值及其行列下标 |
| `count_words` | 输入一句话，输出单词个数 |

`selection_sort_random.c` 和 `bubble_sort_random.c` 用 `srand(time(NULL))` 生成随机数，每次输出不同，无法写固定的期望输出，因此不提供 `tests/`。
