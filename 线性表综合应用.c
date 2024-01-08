1. 从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值。空出的位置由最后一个元素填补，若顺序表位空，则显示出错信息并退出运行
C：
# include <stdio.h>
# include <stdbool.h>
#define Maxsize 50
typedef int elemtype;

typedef struct{
    elemtype data[Maxsize];
    int length;
}sqlist;

bool delete(sqlist *L ,int *value)
{   
    int pos = 0;
    *value = L->data[0];
    if(L->length == 0)
        return false;
    for(int i = 0; i<L->length; i++){
        if(*value > L->data[i]){
           *value = L->data[i];
            pos = i;
        }         
    }
    L->data[pos] = L->data[L->length - 1];
    L->length--;
    return true;
}
测试用例：
// int main() {
//     sqlist myList;
//     myList.length = 5;  // 为了示例，初始化一个长度为 5 的顺序表

//     // 为示例数据赋值
//     myList.data[0] = 5;
//     myList.data[1] = 2;
//     myList.data[2] = 8;
//     myList.data[3] = 3;
//     myList.data[4] = 10;

//     // 显示原始顺序表
//     printf("原始顺序表:\n");
//     for (int i = 0; i < myList.length; i++) {
//         printf("%d ", myList.data[i]);
//     }
//     printf("\n");

//     // 调用 delete 函数删除最小值元素
//     elemtype minValue;
//     if (delete(&myList, &minValue)) {
//         printf("删除的最小数字是: %d\n", minValue);

//         // 显示修改后的顺序表
//         printf("修改后的顺序表是:\n");
//         for (int i = 0; i < myList.length; i++) {
//             printf("%d ", myList.data[i]);
//         }
//         printf("\n");
//     } else {
//         printf("没有元素.\n");
//     }

//     return 0;
// }


2. 设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O（1）
