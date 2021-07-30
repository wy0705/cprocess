////
//// Created by wy on 2021/7/29.
////
//#include <stdio.h>
//#include <cstdlib>
//
//typedef struct{
//    int key;  //键
//    int val;  //值
//}DataType; //对基本数据类型进行封装，类似泛型
//typedef struct{
//    DataType data;
//    struct HashNode *next;  //key冲突时，通过next指针进行连接
//}HashNode1;
//typedef struct{
//    int size;
//    HashNode1 *table;
//}HashMap,*hashmap;
////f1_createHashMap
////将给定的整形数组构建为HashMap,size为数组长度
//HashMap *CreateHashMap(int *nums,int size){
//    //分配内存空间
//    HashMap *hashmap=(HashMap*)malloc(sizeof(HashMap));
//    hashmap->size=2*size;
//    //hash表分配空间
//    hashmap->table=(HashNode1 *)malloc(sizeof(HashNode1)*hashmap->size);
//    //初始化
//    int j=0;
//    for(j=0;j<hashmap->size;j++){
//        hashmap->table[j].data.val=INT_MIN;
//        hashmap->table[j].next=NULL;
//    }
//    int i=0;
//    //建立HashMap
//    while(i<size){
//        //根据数组元素的值计算其在hashMap中的位置
//        int pos=abs(nums[i])%hashmap->size;
//        //判断是否冲突
//        if(hashmap->table[pos].data.val==INT_MIN){
//            //不冲突
//            //把元素在数组中的索引作为key
//            hashmap->table[pos].data.key=i;
//            //把元素值作为value
//            hashmap->table[pos].data.val=nums[i];
//        }
//            //冲突
//        else{
//            //给当前元素分配一个结点，并为结点复制
//            HashNode1 *lnode=(HashNode1*)malloc(sizeof(HashNode1)),*hashnode;
//            lnode->data.key=i;
//            lnode->data.val=nums[i];
//            lnode->next=NULL;
//            //从冲突位置开始，遍历链表
//            hashnode=&(hashmap->table[pos]);
//            while(hashnode->next!=NULL){
//                hashnode= reinterpret_cast<HashNode1 *>(hashnode->next);
//            }
//            //将当前结点连接到链表尾部
//            hashnode->next=lnode;
//        }
//        //处理下一个元素
//        i++;
//    }
//    //处理完成，返回HashMap
//    return hashmap;
//}
//
////f2_GetHashNode
//int Get(HashMap hashmap,int value){
////根据元素值，计算其位置
//int pos=abs(key)%hashmap.size;
//HashNode1 *pointer=&(hashmap.table[pos]);
////在当前链表遍历查找该结点
//while(pointer!=NULL){
//if(pointer->data.value==value)
//return pointer->data.key;
//else
//pointer=pointer->next;
//}
////未找到，返回-1
//return -1;
//}
//
////f3_Put，与建立HashMap时插入元素的方法相同
//int Put(HashMap hashmap,int key,int value){
//    int pos=abs(value)%hashmap.size;
//    HashNode1 *pointer=&(hashmap.table[pos]);
//    if(pointer->data.val==INT_MIN)
//    {
//        pointer->data.val=value;
//        pointer->data.key=key;
//    }
//    else{
//        while(pointer->next!=NULL)
//            pointer=pointer->next;
//        HashNode1 *hnode=(HashNode1 *)malloc(sizeof(HashNode1));
//        hnode->data.key=key;
//        hnode->data.val=value;
//        hnode->next=NULL;
//        pointer->next=hnode;
//    }
//    return 1;
//}
//
////f4_PrintHashMap
//void PrintHashMap(HashMap* hashmap){
//    printf("%===========PrintHashMap==========\n");
//    int i=0;
//    HashNode1 *pointer;
//    while(i<hashmap->size){
//        pointer=&(hashmap->table[i]);
//        while(pointer!=NULL){
//            if(pointer->data.val!=INT_MIN)
//                printf("%10d",pointer->data.val);
//            else
//                printf("        [ ]");
//            pointer=pointer->next;
//        }
//        printf("\n---------------------------------");
//        i++;
//        printf("\n");
//    }
//    printf("===============End===============\n");
//}
//
////f5_DestoryHashMap
//void DestoryHashMap(HashMap *hashmap){
//    int i=0;
//    HashNode1 *hpointer;
//    while(i<hashmap->size){
//        hpointer=hashmap->table[i].next;
//        while(hpointer!=NULL){
//
//            hashmap->table[i].next=hpointer->next;
//            //逐个释放结点空间，防止内存溢出
//            free(hpointer);
//            hpointer=hashmap->table[i].next;
//        }
//        //换至下一个结点
//        i++;
//    }
//    free(hashmap->table);
//    free(hashmap);
//    printf("Destory hashmap Success!");
//}
//
