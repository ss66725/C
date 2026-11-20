# 261120：动态链表重写、共用体、枚举、typedef

对应教材第 9 章 9.4.3–9.4.4（动态链表）、9.5（共用体）、9.6（枚举）、9.7（typedef）。

## 文件

| 文件 | 内容 |
|---|---|
| `dynamic_list_build.c` | 从零重写动态链表：`malloc` 建三个节点、尾插法连链、遍历、逐个释放；用 `typedef` 给结构体起别名 `Student` |
| `union_basic.c` | 共用体基本用法：验证成员共用同一块内存，以及 `sizeof` 取最大成员 |
| `weekday_enum.c` | 枚举练习：输入 1–7 输出星期名，周末额外提示，越界报错 |
| `max_of_100.c` | 读入 100 个数，用取两数较大值的函数逐个比较求最大值 |

## 知识点

### 动态链表

- `malloc` **不清零**，返回的内存里是上一个使用者的残留数据，所以 `p->next = NULL` 必须自己写，不能指望它有初值。
- 演示过：`free` 掉一块带数据的节点，再次 `malloc` 时分配器优先复用这块，旧数据还在。
- 局部变量和 `malloc` 的内存都是垃圾值；只有全局变量、`static` 变量、`calloc` 会自动清零。
- 建链四步：造（`malloc`）→ 填（`strcpy`、`=`、`next = NULL`）→ 接（空表 `head = p`，否则 `tail->next = p`）→ 换手（`tail = p`）。
- `tail = p` 两种情况都要执行，所以提到 `if` 外面只写一次。同一句代码出现在两个分支里，通常说明它不该在分支里。
- 遍历用 `for (; p != NULL; p = p->next)`，**体内不要再写 `p = p->next`**，否则一轮走两步，会跳过节点。
- 释放必须“先走再放”：`temp = head; head = temp->next; free(temp);`。
- 写成 `free(head)` 会释放下一个节点，当前节点泄漏；从已释放的内存里读 `next` 是 use-after-free。这种错误常常不崩溃，靠输出看不出来。
- `free(NULL)` 是合法的空操作，这一点会掩盖释放循环里的错误。
- `NULL` 就是地址 0，表示“不指向任何地方”。操作系统让地址 0 不可访问，所以漏判 NULL 会立刻崩溃，问题不会藏起来。

### 共用体

- `union { int i; char c[4]; }` 的大小是 **4**，不是 8。成员**叠在**同一块内存上。
- 结构体是并排（各占各的），共用体是叠加（共用一块），这是唯一的区别。
- `d.i = 332` 时 4 个字节是 `76 1 0 0`；再 `strcpy(d.c, "khd")` 后变成 `107 104 100 0`（`'k' 'h' 'd' '\0'`），整数随之变成 6580331。
- 任何时刻只有一个成员有效，写一个就会覆盖另一个。所以**不可能同时给两个成员赋值**，这是物理限制不是语法限制。
- 大小 = 最大成员的大小。房间必须够最大的那个住。
- `printf` 的第一个参数必须是格式串，`printf(sizeof(...))` 会把数字当地址用。
- `char c[4]` 只能装 3 个字符 + `'\0'`。`strcpy(d.c, "khdo")` 会写 5 字节造成越界，gcc 用 `-Wstringop-overflow` 报出来。
- 用途：省内存（单片机上常见）、同一块数据多种解释（硬件寄存器、通信协议）、变体记录（`union` 加一个标签字段记着当前是哪种）。

### 枚举

- `enum weekday { MON = 1, TUE, WED, THU, FRI, SAT, SUN };` 是**类型定义**，不是变量，所以后面不能写 `=`。
- 成员默认从 0 开始递增；显式指定后，后面的成员接着往下数。`MON = 1` 时 `SUN` 就是 7。
- `enum weekday d; d = asw;` 合法。枚举变量本质就是 `int`，**C 不检查范围**，所以 `switch` 必须有 `default` 兜底。
- `case` 后面必须是编译期常量，不能写表达式。`case SAT && SUN:` 不合法。
- 同一个值只能有一个 `case`，重复出现报 `duplicate case value`。
- 多个值要做**完全一样**的事，才用穿透（两个 `case` 叠着写，中间不 `break`）。名字和输出不同时，各写各的。
- `default` 里不要 `return 1`：用户输错数字不算程序出错，正常走 `return 0`。

### typedef

- `typedef struct student Student;` 之后，`Student s1;` 与 `struct student s1;` 等价。
- 别名在**整条语句结束后**才生效，所以结构体内部不能写 `Student *next;`，只能写 `struct student *next;`。
- typedef 由编译器处理，有类型信息；`#define` 只是文本替换。起别名用 typedef，不用 `#define`。
- `sizeof(struct)` 一般是成员大小之和，但有**内存对齐填充**：`struct { char a; int b; }` 是 8 不是 5。本文件的 20+4+4 正好没有空隙。

## 本次改动

- 新建当天文件夹，归档动态链表重写版和共用体练习。
- `01.c` 改名为 `dynamic_list_build.c`，`02.c` 改名为 `union_basic.c`。
- 新增枚举练习 `weekday_enum.c`。
- 新增 `max_of_100.c`，并修复原稿的两个问题：`printf` 写在 `for` 循环里且条件是 `i == 100`，而循环条件为 `i < 100`，**永远不会执行**；提示语写“99 numbers”却读入 100 个。现改为循环结束后统一输出，提示语改成 100。
- `dynamic_list_build.c` 改用 `typedef struct student Student;`，全文用 `Student`，结构体内 `next` 仍写 `struct student *`。
- 删除重复的 `01.c`（与 `weekday_enum.c` 内容相同）。

## 期望输出说明

| 程序 | 说明 |
|---|---|
| `dynamic_list_build` | 无输入，输出 Tom、Mike、Jane 三个节点 |
| `union_basic` | 无输入，依次输出 `d.i`、`d.c` 和 `sizeof` |
| `weekday_enum` | 输入 1–7 输出英文星期名，6、7 额外输出周末提示，其余输出 `Invalid day` |
| `max_of_100` | 输入 100 个整数，输出其中的最大值 |
