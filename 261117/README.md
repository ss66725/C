# 261117：动态链表

对应教材第 9 章 9.4.3–9.4.4。

## 文件

| 文件 | 内容 |
|---|---|
| `dynamic_list_create.c` | 用 `malloc` 在循环里建三个节点，尾插法连成链表，遍历输出后逐个释放 |

## 知识点

- **`malloc` 申请的内存没有名字。** 它只返回一个地址，只能用指针接住，所以访问成员一律用 `->`。
- `malloc` 在**运行时**分配，节点数量可以随数据变；静态变量（`s1`、`s2`）在编译时就定死了数量。
- **`head` 和 `tail` 必须初始化为 `NULL`。** 不初始化里面是随机垃圾值，`head == NULL` 的判断不可靠，`tail->next` 可能访问非法地址，程序崩溃且每次结果不同。
- **`head` 只在第一轮赋值**，之后永远指向第一个节点，否则遍历找不到表头。`tail` 每一轮都要更新，必须永远指向最后一个节点。
- 循环里四步：造（`malloc`）→ 填（`strcpy`、`=`、`next = NULL`）→ 接（空表 `head = s`，否则 `tail->next = s`）→ 换手（`tail = s`）。
- **赋值永远是右边给左边。** 想让 `tail` 指向新节点，写 `tail = s`，不是 `s = tail`。写反了 `tail` 永远是 `NULL`，第二轮 `tail->next = s` 直接段错误。
- 数组声明要带元素个数：`char *names[3]` 是三个指针，`char *name` 只是一个指针。编译器报 `excess elements in scalar initializer` 就是“给了 3 个值，但只能装 1 个”。
- **释放链表不能直接 `free(p); p = p->next;`**，那样会读到已经还给系统的内存（use-after-free）。正确做法是先存一份地址：`t = head; head = head->next; free(t);`。
- `free` 认的是**地址**，不是变量名。`s`、`head`、`t` 是三个不同的指针变量，但装的是同一个地址，`free` 谁都能释放那块内存。

## 本次改动

- 新建当天文件夹，归档动态链表练习。
- 原 `02.c` 改名为 `dynamic_list_create.c`，原名看不出内容。
- 补充 `tests/dynamic_list_create.txt` 期望输出。

## 期望输出说明

程序没有输入，输出固定：arctan 2、arcsin 4、arccos 6，各占一行。

## 备注

`if (head == 0)` 可以编译运行，`0` 在 C 里就是空指针常量，与 `NULL` 等价。写成 `head == NULL` 语义更明确。
