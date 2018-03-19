最大子序列和

方法一：暴力 O(N3)

算出所有子列和，再求最大的

```
int MaxSubseqSuml(int A[], int N) {

	int ThisSum, MaxSum = 0;
	int i, j, k;
	for(i = 0; i < N; i++) {  //i是子列左端位置
        for(j = i; j < N; j++) {  //j是子列右端位置
            ThisSum = 0;  //A[i]到A[j]的子列和
            for(k = i; k <= j; k++) {
                ThisSum += A[k];
            }
            if(ThisSum > MaxSum) {
                MaxSum = ThisSum; //更新结果
            }
        }
	}
	return MaxSum;
}
```

方法二：O（N2）

```
int MaxSubseqSuml(int A[], int N) {

    int ThisSum, MaxSum = 0;
    int i, j, k;
    for(i = 0; i < N; i++) {  //i是子列左端位置
    	ThisSum = 0;  //A[i]到A[j]的子列和
        for(j = i; j < N; j++) {  //j是子列右端位置
            ThisSum += A[j];
            if(ThisSum > MaxSum) {
                MaxSum = ThisSum; //更新结果
            }
        }
    }
    return MaxSum;	

}
```

方法三：分而治之+递归 O(NlogN)

方法四：在线处理 O(N)

```
int MaxSubseqSuml(int A[], int N) {

    int ThisSum, MaxSum = 0;
    int i;
    ThisSum = MaxSum = 0;  //当前子列和 = 最大子列和 初始化
    for(i = 0; i < N; i++) {  //i是子列左端位置
        ThisSum += A[i]; //向右累加
        if(ThisSum > MaxSum) 
        	MaxSum = ThisSum; //若当前子列和大于最大子列和，更新最大子列和为当前子列和
        else if(ThisSum < 0) //这句最重要  若当前子列和小于0，重置为0（代表抛弃） 因为它不可能使后面的子列和越来越大
        	ThisSum = 0;
    }
    return MaxSum;		

}
```

