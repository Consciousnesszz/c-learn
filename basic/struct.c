#include <stdio.h>
#include <string.h>

/**
 * 结构 在内存空间中保存类似于 数组，即结构也是内存空间中一块连续的地址
 *  1. 结构定义不预留内存
 *  2. 结构定义一般放在头文件后，程序开始部分
 *  3. 结构定义仅描述结构的形式，使用结构需声明结构变量
 */

struct Books {
  char name[50];
  char author[50];
  char subject[100];
  int book_id;
};

typedef struct {
  unsigned char a; // 1 + 3空闲
  unsigned int b; // 4
  unsigned char c; // 1 + 3空闲
} size1_t;

typedef struct {
  unsigned char a; // 1
  unsigned char b; // 1 + 2空闲
  unsigned int c; // 4
} size2_t;

// 位域， 占 1 个字节 8 比特，如一个字节所剩空间不够存放另一位域时，应从下一单元起存放该位域。也可以有意使某位域从下一单元开始。
struct bs {
  int a: 1;
  int b: 1;
  int  : 2; // 该两位不能用
  int c: 4;
};

void printBook(struct Books *book) {
  // 可使用 -> 运算符，通过 指针方式 访问 struct（结构）成员
  printf("Book name : %s\n", book->name);
  printf("Book author : %s\n", book->author);
  printf("Book subject : %s\n", book->subject);
  printf("Book book_id : %d\n", book->book_id);
}

int main() {
  struct Books tribody;
  struct Books math;

  strcpy(tribody.name, "tribody");
  strcpy(tribody.author, "cixin liu");
  strcpy(tribody.subject, "science fiction");
  tribody.book_id = 11123;

  math = {"math", "People's Education Press", "textbook", 42343};

  printBook(&tribody);
  printBook(&math);

  /**
   * 结构体占用存储空间,以32位机为例
   * size1_t 存储空间分布为a(1byte)+空闲(3byte)+b(4byte)+c(1byte)+空闲(3byte)=12(byte)。
   * size2_t 存储空间分布为a(1byte)+b(1byte)+空闲(2byte)+c(4byte)=8(byte)。
   */

  printf("size1_t size=%lu,size2_t size=%lu\r\n", sizeof(size1_t), sizeof(size2_t));

  return 0;
}
