#include<stdio.h>
#define N 5    //设定待排序序列中的元素个数
//实现冒泡升序排序算法的函数，list[N] 为待排序数组
void Bubble_sort(int list[N]) {
    int i, j;
    int temp = 0;
    // N 个元素，遍历 N-1 次
    for (i = 0; i < N - 1; i++) {
        // 从第 1 个元素开始遍历，遍历至 N-1-i
        for (j = 0; j < N - 1 - i; j++) {
            //比较 list[j] 和 list[j+1] 的大小
            if (list[j] > list[j + 1]) {
                //交换 2 个元素的位置
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}
int main() {
    int i = 0;
    int list[N] = { 14,33,27,35,10 };
    Bubble_sort(list);
    //输出已排好序的序列
    for (i = 0; i < N; i++) {
        printf("%d ", list[i]);
    }
    return 0;
}
